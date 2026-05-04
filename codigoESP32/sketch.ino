#include <WiFi.h>
#include <HTTPClient.h>
#include <DHT.h>

#define DHTPIN 27
#define DHTTYPE DHT22

const char* ssid = "EloisaCasa_2G";
const char* password = "Paulo1011@";

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  WiFi.begin(ssid, password);

  Serial.println("Conectando ao Wi-Fi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wi-Fi conectado!");
  Serial.print("IP do ESP32: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Erro ao ler o sensor!");
    return;
  }

 
 String json = "{";
  json += "\"device_id\": \"esp32_01\",";
  json += "\"temperatura\": " + String(temperatura) + ",";
  json += "\"umidade\": " + String(umidade);
  json += "}";

  HTTPClient http;

http.begin("http://IP_DO_SEU_COLEGA/dados"); // coloca a URL aqui
http.addHeader("Content-Type", "application/json");

// se tiver token:
http.addHeader("Authorization", "Bearer SEU_TOKEN");

int httpResponseCode = http.POST(json);

Serial.print("Resposta HTTP: ");
Serial.println(httpResponseCode);

http.end();

  Serial.println("JSON:");
  Serial.println(json);

  Serial.print("Temp: ");
  Serial.print(temperatura);
  Serial.print(" °C | Umidade: ");
  Serial.print(umidade);

  Serial.println(" %");

  delay(4000);
 
  
}
