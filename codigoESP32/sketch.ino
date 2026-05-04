#include <WiFi.h>
#include <HTTPClient.h>
#include <DHT.h>

// CONFIG SENSOR
#define PINO_SENSOR 27
#define TIPO_SENSOR DHT22

// CONFIG WIFI
const char* WIFI_SSID = "EloisaCasa_2G";
const char* WIFI_SENHA = "Paulo1011@";

// CONFIG API
const char* URL_API = "http://IP_DO_SEU_COLEGA/dados";
const char* TOKEN_API = "SEU_TOKEN";

// INSTÂNCIA DO SENSOR
DHT sensor(PINO_SENSOR, TIPO_SENSOR);

void conectarWiFi() {
  Serial.println("Conectando ao Wi-Fi...");

  WiFi.begin(WIFI_SSID, WIFI_SENHA);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWi-Fi conectado com sucesso!");
  Serial.print("IP do ESP32: ");
  Serial.println(WiFi.localIP());
}

String montarJSON(float temp, float umid) {
  String payload = "{";
  payload += "\"device_id\": \"esp32_01\",";
  payload += "\"temperatura\": " + String(temp) + ",";
  payload += "\"umidade\": " + String(umid);
  payload += "}";

  return payload;
}

void enviarDados(String json) {
  HTTPClient clienteHTTP;

  clienteHTTP.begin(URL_API);
  clienteHTTP.addHeader("Content-Type", "application/json");
  clienteHTTP.addHeader("Authorization", "Bearer " + String(TOKEN_API));

  int codigoResposta = clienteHTTP.POST(json);

  Serial.print("Resposta HTTP: ");
  Serial.println(codigoResposta);

  clienteHTTP.end();
}

void setup() {
  Serial.begin(9600);
  sensor.begin();

  conectarWiFi();
}

void loop() {
  float temperatura = sensor.readTemperature();
  float umidade = sensor.readHumidity();

  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Erro ao ler o sensor!");
    return;
  }

  String json = montarJSON(temperatura, umidade);

  enviarDados(json);

  Serial.println("JSON enviado:");
  Serial.println(json);

  Serial.print("Temp: ");
  Serial.print(temperatura);
  Serial.print(" °C | Umidade: ");
  Serial.print(umidade);
  Serial.println(" %");

  delay(4000);
}
