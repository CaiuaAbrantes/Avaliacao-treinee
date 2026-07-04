# Problem Analysis

## 1. Contexto

Em aplicações baseadas em Internet das Coisas (IoT), sensores são responsáveis pela coleta contínua de dados que representam o estado de um ambiente monitorado. Essas informações precisam ser recebidas, armazenadas, processadas e disponibilizadas para consulta de forma confiável.

Entretanto, em cenários onde não existe um mecanismo automatizado para tratamento dessas informações, a identificação de comportamentos anormais depende da análise manual das leituras, tornando o processo lento, suscetível a erros e pouco escalável. Além disso, a ausência de um histórico estruturado dificulta análises posteriores e reduz a capacidade de resposta diante de situações críticas.

Nesse contexto, torna-se necessária uma solução capaz de automatizar a aquisição dos dados, armazená-los de forma organizada e identificar automaticamente possíveis anomalias.

---

# 2. Problema identificado

O principal problema consiste na inexistência de um mecanismo automatizado para detectar anomalias nos dados coletados por sensores.

Sem essa automação, a identificação de valores fora do comportamento esperado depende da observação humana, o que aumenta o tempo necessário para reconhecer situações anormais e reduz a confiabilidade do monitoramento.

Além disso, a ausência de um sistema centralizado dificulta:

* armazenamento organizado das medições;
* consulta ao histórico de dados;
* identificação de tendências;
* geração automática de alertas;
* análise eficiente de grandes volumes de informações.

---

# 3. Evidências do problema

<img width="772" height="237" alt="image" src="https://github.com/user-attachments/assets/04b315c3-2594-43bd-bb1d-545182be1daf" />
<img width="809" height="532" alt="image" src="https://github.com/user-attachments/assets/a14731a6-d0f8-4334-9b8b-de09be525cf6" />
<img width="802" height="263" alt="image" src="https://github.com/user-attachments/assets/bd1f7ffb-fade-43b2-8e06-5ac9065724cd" />


---

# 4. Medição do problema

Para caracterizar objetivamente o problema serão utilizados indicadores que permitam comparar o processo manual com a solução automatizada.

Os principais indicadores são:

* tempo médio necessário para identificar uma anomalia manualmente;
* quantidade de leituras analisadas por período;
* tempo necessário para localizar uma informação específica no histórico;
* intervalo entre a ocorrência de uma anomalia e sua identificação;
* quantidade de leituras processadas sem qualquer mecanismo automático de classificação.

Esses indicadores servirão como referência para avaliar os ganhos obtidos após a implantação da solução.

---

# 5. Objetivos da solução

A solução proposta tem como objetivo automatizar o monitoramento das informações coletadas por sensores, reduzindo a necessidade de intervenção humana e aumentando a eficiência do processo de acompanhamento dos dados.

Para isso, o sistema deverá:

* realizar a coleta automática das leituras utilizando dispositivos ESP32;
* receber as informações por meio de uma API desenvolvida em FastAPI;
* armazenar os dados em um banco de dados InfluxDB;
* processar continuamente as leituras por meio de um worker responsável pela detecção de anomalias;
* disponibilizar uma interface para consulta das informações processadas.

---

# 6. Indicadores para avaliação da solução

Após a implementação, serão avaliados indicadores capazes de demonstrar a eficiência da solução desenvolvida.

Entre eles destacam-se:

* tempo médio entre o envio da leitura pelo ESP32 e seu armazenamento no banco de dados;
* tempo médio de processamento realizado pelo worker;
* quantidade de leituras processadas por minuto;
* quantidade de anomalias identificadas durante os testes;
* taxa de acerto do algoritmo de detecção em relação aos dados simulados;
* disponibilidade das informações para consulta pelos usuários.

Os resultados obtidos serão comparados aos indicadores do processo manual, permitindo avaliar quantitativamente os benefícios proporcionados pelo sistema.

---

# 7. Benefícios esperados

Com a implantação da solução espera-se:

* reduzir o tempo necessário para identificar anomalias;
* diminuir a dependência de monitoramento manual;
* aumentar a confiabilidade do armazenamento das informações;
* facilitar consultas ao histórico de dados;
* apoiar a tomada de decisão baseada em informações atualizadas;
* oferecer uma arquitetura escalável para futuras expansões do sistema.

