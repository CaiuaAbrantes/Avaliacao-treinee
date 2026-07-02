# PLANO DE EXECUÇÃO

## 1. Introdução

O presente Plano de Execução descreve o planejamento adotado para o desenvolvimento do sistema inteligente de monitoramento baseado em Internet das Coisas (IoT). Seu objetivo é organizar as atividades necessárias para a implementação da solução, definir responsabilidades entre os integrantes da equipe, estabelecer a sequência de desenvolvimento das funcionalidades e documentar os mecanismos utilizados para controle das entregas.

Além de orientar o desenvolvimento do projeto, este documento permite acompanhar a evolução da solução ao longo das sprints, registrar as versões produzidas e garantir que todas as funcionalidades previstas sejam implementadas de forma organizada e integrada.

---

# 2. Objetivos do Plano de Execução

Este plano possui como principais objetivos:

* organizar o desenvolvimento do projeto;
* definir a sequência de implementação das funcionalidades;
* distribuir responsabilidades entre os integrantes da equipe;
* estabelecer um cronograma para execução das atividades;
* controlar a evolução do projeto por meio de versionamento semântico;
* acompanhar as entregas realizadas em cada Sprint;
* reduzir riscos durante o desenvolvimento;
* garantir que todos os componentes sejam integrados antes da entrega final.

---

# 3. Escopo do Projeto

O projeto consiste no desenvolvimento de um sistema inteligente de monitoramento baseado em Internet das Coisas (IoT), capaz de coletar dados provenientes de sensores, transmitir essas informações para uma infraestrutura computacional, armazená-las em um banco de dados especializado e identificar automaticamente possíveis anomalias por meio de técnicas estatísticas.

A arquitetura do sistema é composta pelos seguintes módulos:

* Sistema embarcado utilizando ESP32 para aquisição das informações;
* Infraestrutura de comunicação utilizando AWS;
* API desenvolvida em FastAPI;
* Banco de dados InfluxDB para armazenamento das séries temporais;
* Worker responsável pelo processamento e detecção automática de anomalias;
* Interface para consulta das informações processadas.

Cada componente foi desenvolvido para atender uma necessidade específica da arquitetura proposta e sua relação com os problemas identificados encontra-se detalhada no documento **Feature Impact**.

---

# 4. Problema Identificado

O desenvolvimento do projeto teve origem na necessidade de automatizar o monitoramento de dados provenientes de sensores.

Em processos convencionais, a identificação de comportamentos anormais depende da observação manual das informações coletadas, tornando o monitoramento mais lento, suscetível a erros e pouco eficiente quando grandes volumes de dados são produzidos continuamente.

A análise detalhada desse problema, bem como suas evidências e indicadores, encontra-se documentada no arquivo **Problem Analysis**.

---

# 5. Estratégia de Desenvolvimento

O desenvolvimento do projeto foi organizado utilizando princípios de desenvolvimento incremental.

As funcionalidades foram divididas em pequenas entregas realizadas ao longo de Sprints, permitindo evolução contínua da solução, integração frequente entre os componentes e validação progressiva das funcionalidades implementadas.

Durante o desenvolvimento foram adotadas as seguintes práticas:

* utilização de Git para controle de versões;
* organização das atividades por meio de Kanban;
* acompanhamento do cronograma utilizando diagrama de Gantt;
* versionamento baseado em Semantic Versioning;
* documentação contínua das funcionalidades desenvolvidas.

Essa estratégia permitiu reduzir riscos, facilitar a integração entre os componentes e manter rastreabilidade durante todo o desenvolvimento.

---

# 6. Organização da Equipe

A equipe foi organizada considerando as competências técnicas de cada integrante.

### Paulo Henrique

Responsável pelo desenvolvimento do sistema embarcado utilizando ESP32, implementação da coleta dos sensores, transmissão das informações para a infraestrutura computacional e realização dos testes de comunicação.

### Tácio Matias

Responsável pelo desenvolvimento da API utilizando FastAPI, integração com o banco de dados InfluxDB e disponibilização das informações para consulta pelos demais componentes da arquitetura.

### Caiuá Abrantes Lopes

Responsável pelo desenvolvimento do worker de processamento das leituras, implementação do algoritmo de detecção automática de anomalias, integração entre os componentes do sistema e elaboração da documentação técnica do projeto.

Embora existam responsabilidades principais, diversas atividades foram executadas de maneira colaborativa durante o desenvolvimento.

---

# 7. Planejamento das Sprints

## Sprint 1 – Planejamento da Arquitetura

Objetivo:

Definir a arquitetura geral do sistema e organizar o ambiente de desenvolvimento.

Principais atividades:

* levantamento dos requisitos;
* definição da arquitetura;
* configuração do repositório;
* organização inicial da documentação.

Entrega:

Estrutura inicial do projeto.

---

## Sprint 2 – Aquisição de Dados

Objetivo:

Implementar o sistema responsável pela coleta das informações.

Principais atividades:

* desenvolvimento do firmware do ESP32;
* leitura dos sensores;
* envio das informações para a infraestrutura computacional;
* testes de comunicação.

Entrega:

Aquisição automática de dados funcionando.

---

## Sprint 3 – Backend e Armazenamento

Objetivo:

Implementar o recebimento e armazenamento das informações.

Principais atividades:

* desenvolvimento da API;
* integração com o banco de dados;
* armazenamento das séries temporais;
* validação dos dados recebidos.

Entrega:

Sistema armazenando corretamente as informações.

---

## Sprint 4 – Processamento Inteligente

Objetivo:

Implementar o processamento automático das leituras.

Principais atividades:

* desenvolvimento do Worker;
* implementação do algoritmo Modified Z-Score;
* classificação automática das leituras;
* gravação dos resultados processados.

Entrega:

Sistema realizando detecção automática de anomalias.

---

## Sprint 5 – Integração Final

Objetivo:

Concluir a integração da arquitetura.

Principais atividades:

* integração entre todos os componentes;
* testes completos;
* correção de inconsistências;
* revisão da documentação.

Entrega:

Primeira versão completa do sistema.

---

# 8. Cronograma de Desenvolvimento

O cronograma do projeto foi elaborado utilizando um diagrama de Gantt, permitindo acompanhar a execução das atividades previstas ao longo do semestre.

O cronograma contempla:

* planejamento;
* desenvolvimento;
* integração;
* testes;
* documentação;
* entrega final.

---

# 9. Controle das Versões

O projeto adota o padrão Semantic Versioning para acompanhar sua evolução.

Planejamento das versões:

| Versão | Descrição                |
| ------ | ------------------------ |
| 0.1.0  | Estrutura inicial        |
| 0.2.0  | Sistema embarcado        |
| 0.3.0  | API e banco de dados     |
| 0.4.0  | Worker de processamento  |
| 0.5.0  | Interface de consulta    |
| 0.6.0  | Integração entre módulos |
| 0.7.0  | Testes e correções       |
| 1.0.0  | Primeira versão estável  |

Cada versão representa uma etapa concluída do desenvolvimento e facilita o acompanhamento da evolução do projeto.

---

# 10. Controle das Atividades

O acompanhamento das atividades foi realizado por meio de ferramentas de gerenciamento de projetos.

Foram utilizados:

* Backlog para definição das funcionalidades;
* Kanban para acompanhamento das tarefas;
* Git para controle de versões;
* documentação técnica para registro das decisões de desenvolvimento.

Essa organização permitiu acompanhar continuamente o progresso das atividades e reduzir inconsistências durante a implementação.

---

# 11. Critérios de Validação

Cada componente do sistema foi considerado concluído somente após atender aos critérios de validação definidos pela equipe.

Entre eles destacam-se:

* comunicação correta entre os módulos;
* armazenamento adequado das informações;
* processamento correto das leituras;
* detecção automática das anomalias;
* funcionamento integrado da arquitetura;
* documentação atualizada.

Além disso, foram realizados testes para verificar a integração completa entre ESP32, API, banco de dados, worker e interface de consulta.

---

# 12. Gerenciamento de Riscos

Durante o planejamento foram identificados riscos técnicos que poderiam comprometer o desenvolvimento do projeto.

Os principais riscos considerados foram:

* falhas na comunicação entre os componentes;
* indisponibilidade temporária dos serviços em nuvem;
* inconsistências durante a integração entre os módulos;
* falhas no armazenamento das informações;
* erros na implementação do algoritmo de detecção de anomalias.

Para minimizar esses riscos foram previstos testes periódicos, integração contínua e validação individual de cada componente antes da integração final.

---

# 13. Entregas Esperadas

Ao final do desenvolvimento espera-se disponibilizar:

* sistema embarcado para aquisição das informações;
* infraestrutura de comunicação em nuvem;
* API para recebimento das leituras;
* banco de dados para armazenamento das séries temporais;
* worker responsável pela detecção automática de anomalias;
* interface para consulta das informações;
* documentação técnica completa;
* código-fonte versionado.

---

# 14. Considerações Finais

O Plano de Execução estabelece as diretrizes utilizadas para conduzir o desenvolvimento do sistema de monitoramento inteligente proposto neste projeto.

Sua utilização permitiu organizar as atividades, distribuir responsabilidades, acompanhar a evolução das funcionalidades e manter consistência entre o planejamento e a implementação da solução.

Além disso, a integração entre cronograma, versionamento, documentação técnica e controle das atividades contribuiu para que o desenvolvimento ocorresse de forma estruturada, favorecendo a qualidade da solução final e facilitando futuras evoluções da arquitetura.

| Sprint | Objetivo     | Responsável principal | Versão |
| ------ | ------------ | --------------------- | ------ |
| 1      | Planejamento | Equipe                | 0.1.0  |
| 2      | ESP32        | Paulo                 | 0.2.0  |
| 3      | API + Banco  | Tácio                 | 0.3.0  |
| 4      | Worker       | Caiuá                 | 0.4.0  |
| 5      | Integração   | Equipe                | 1.0.0  |
