
# Team Responsibilities

## Objetivo

Este documento apresenta a divisão de responsabilidades entre os integrantes da equipe durante o desenvolvimento do projeto. A definição clara das funções permite organizar o fluxo de trabalho, distribuir as atividades de acordo com as competências de cada membro e facilitar o acompanhamento da evolução do sistema ao longo das sprints.

---

## Distribuição das responsabilidades

### Paulo Henrique

Responsável pelo desenvolvimento da camada de aquisição de dados.

Principais atividades:

* Desenvolvimento do firmware do ESP32;
* Integração dos sensores ao microcontrolador;
* Coleta periódica das leituras;
* Envio das informações para a API;
* Testes de comunicação entre o dispositivo embarcado e o servidor.

---

### Tácio Matias

Responsável pelo desenvolvimento da camada de comunicação e armazenamento.

Principais atividades:

* Desenvolvimento da API utilizando FastAPI;
* Implementação dos endpoints de comunicação;
* Integração entre a API e o banco de dados InfluxDB;
* Validação das informações recebidas;
* Disponibilização dos dados para consulta pelos demais componentes do sistema.

---

### Caiuá Abrantes Lopes

Responsável pelo processamento inteligente das informações e documentação do projeto.

Principais atividades:

* Desenvolvimento do worker responsável pelo processamento das leituras;
* Implementação do algoritmo de detecção de anomalias;
* Processamento e classificação automática dos dados recebidos;
* Integração entre o worker e o banco de dados;
* Elaboração e manutenção da documentação técnica do projeto;
* Apoio na organização do planejamento, versionamento e documentação das entregas.

---

## Colaboração da equipe

Embora cada integrante possua responsabilidades principais, diversas atividades foram desenvolvidas de forma colaborativa. Entre elas destacam-se:

* definição da arquitetura do sistema;
* levantamento dos requisitos;
* planejamento das funcionalidades;
* revisão da documentação;
* realização de testes integrados;
* validação das entregas previstas em cada sprint.

Essa divisão permitiu que cada componente do sistema fosse desenvolvido de maneira organizada, mantendo a integração entre os módulos e favorecendo a evolução contínua do projeto.
