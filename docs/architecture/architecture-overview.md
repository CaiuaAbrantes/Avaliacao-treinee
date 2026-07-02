
# Architecture Overview

## Objetivo

Este documento apresenta a arquitetura geral do Sistema Inteligente de Monitoramento e Detecção de Anomalias (SIMDA), descrevendo os componentes que compõem a solução, o fluxo de dados entre eles e as responsabilidades de cada módulo.

A arquitetura foi projetada de forma modular, permitindo que cada componente execute uma função específica, facilitando manutenção, escalabilidade e futuras expansões do sistema.

---

# Visão Geral da Arquitetura

A solução proposta é composta por seis componentes principais:

1. ESP32
2. Infraestrutura AWS
3. API FastAPI
4. Banco de Dados InfluxDB
5. Worker de Processamento
6. Front-end

O fluxo geral da arquitetura é apresentado a seguir.

```
ESP32
   │
   ▼
AWS API Gateway
   │
   ▼
FastAPI
   │
   ▼
InfluxDB
   │
   ├──────────────► Front-end
   │
   ▼
Worker (Modified Z-Score)
   │
   ▼
InfluxDB
```

---

# Descrição dos Componentes

## ESP32

O ESP32 representa a camada de aquisição de dados do sistema.

Suas responsabilidades incluem:

- realizar a leitura periódica dos sensores;
- estruturar os dados coletados;
- transmitir as informações para a API utilizando requisições HTTP.

Essa etapa representa o primeiro contato entre o ambiente monitorado e a arquitetura computacional.

---

## Infraestrutura AWS

A infraestrutura em nuvem atua como camada intermediária entre os dispositivos embarcados e o backend da aplicação.

Suas principais responsabilidades são:

- receber as requisições provenientes dos dispositivos;
- disponibilizar comunicação segura;
- permitir escalabilidade da arquitetura;
- encaminhar as requisições para a aplicação FastAPI.

---

## API FastAPI

A API constitui o núcleo da comunicação do sistema.

Entre suas responsabilidades destacam-se:

- receber as informações enviadas pelo ESP32;
- validar os dados recebidos;
- estruturar as informações;
- armazenar as medições no banco de dados;
- disponibilizar os dados para consulta pelos demais módulos.

---

## Banco de Dados InfluxDB

O InfluxDB é responsável pelo armazenamento das séries temporais produzidas pelo sistema.

Entre suas funções encontram-se:

- registrar todas as medições recebidas;
- armazenar histórico das informações;
- permitir consultas temporais;
- disponibilizar dados para processamento estatístico.

---

## Worker de Processamento

O Worker executa o processamento inteligente das leituras.

Suas responsabilidades incluem:

- consultar novas medições;
- aplicar o algoritmo Modified Z-Score;
- identificar leituras anômalas;
- registrar os resultados processados no banco de dados.

Esse componente permite que a identificação das anomalias ocorra automaticamente, eliminando a necessidade de inspeção manual contínua.

---

## Front-end

O Front-end constitui a camada de interação com o usuário.

Suas funções são:

- apresentar as informações armazenadas;
- permitir consultas ao histórico das medições;
- exibir leituras classificadas como anomalias;
- facilitar o acompanhamento do sistema em tempo real.

---

# Fluxo de Funcionamento

O funcionamento da arquitetura ocorre conforme as etapas descritas abaixo.

1. O ESP32 realiza a leitura dos sensores.

2. As informações são transmitidas para a infraestrutura AWS.

3. A AWS encaminha os dados para a API desenvolvida em FastAPI.

4. A API valida e armazena as informações no InfluxDB.

5. O Worker consulta periodicamente as novas leituras armazenadas.

6. O algoritmo Modified Z-Score identifica possíveis anomalias.

7. Os resultados são registrados novamente no banco de dados.

8. O Front-end consulta as informações e apresenta os resultados ao usuário.

---

# Benefícios da Arquitetura

A arquitetura proposta apresenta diversas vantagens.

## Modularidade

Cada componente possui responsabilidades bem definidas, reduzindo o acoplamento entre os módulos.

## Escalabilidade

Novos sensores, algoritmos ou interfaces podem ser adicionados sem necessidade de alterações significativas na arquitetura.

## Manutenção

A separação dos componentes facilita identificação de falhas e evolução do sistema.

## Processamento Automático

A identificação automática das anomalias elimina a necessidade de monitoramento manual constante.

## Armazenamento Histórico

O InfluxDB possibilita consultas temporais e análises futuras sobre os dados coletados.

---

# Relação entre os Componentes

| Componente | Responsabilidade |
|------------|------------------|
| ESP32 | Coleta das informações |
| AWS | Comunicação em nuvem |
| FastAPI | Recepção e validação dos dados |
| InfluxDB | Armazenamento das séries temporais |
| Worker | Processamento e detecção de anomalias |
| Front-end | Visualização das informações |

---

# Considerações Finais

A arquitetura desenvolvida foi concebida para fornecer uma solução organizada, modular e escalável para monitoramento inteligente baseado em Internet das Coisas.

A separação das responsabilidades entre aquisição, comunicação, armazenamento, processamento e visualização permite maior flexibilidade para futuras evoluções do sistema, além de facilitar manutenção, integração e expansão da solução.

Essa organização também favorece a reutilização dos componentes em projetos futuros e mantém compatibilidade com boas práticas de desenvolvimento de sistemas distribuídos e aplicações IoT.
