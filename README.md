# Sistema Inteligente de Monitoramento e Detecção de Anomalias (SIMDA)

Este repositório contém o planejamento e a estruturação inicial do sistema de monitoramento baseado em ESP32 e FastAPI.

## Integrantes da Equipe
- **Caiuá Abrantes**
- **Paulo Henrique**
- **Tácio Matias**

---

## Objetivo do Projeto
Desenvolver uma solução escalável para monitoramento de variáveis ambientais (temperatura/umidade) utilizando microcontroladores ESP32. O sistema foca na coleta automatizada, persistência em banco de dados de séries temporais e detecção de anomalias.

### O sistema oferece:
- Coleta via sensores conectados ao ESP32.
- Backend em **Python com FastAPI** para processamento de JSON.
- Armazenamento em **InfluxDB** (otimizado para sensores).
- Dashboard para visualização e alertas de eventos críticos.
- Estrutura preparada para expansão com Machine Learning.

---

## Tecnologias Previstas

### Hardware e Software
- **Hardware:** ESP32, Sensores (Temperatura/Umidade), Wi-Fi
- **Backend:** Python, FastAPI, InfluxDB
- **DevOps:** Git, GitHub, Versionamento Semântico (SemVer)
- **Gestão:** Kanban Físico e Gráfico de Gantt

---

## Estado Atual: v0.1.0 - Planejamento Inicial
O projeto encontra-se na fase de estruturação de documentação e definição de workflow
- **Versão Atual:** `v0.1.0` (Planejamento e Requisitos).
- **Próximo Marco:** `v0.5.0` (Backend funcional e conexão com Banco de Dados).

---

## Documentação Completa
Acesse os detalhes do projeto através dos links abaixo (conforme estrutura exigida):

### 1. Planejamento
- [Visão do Projeto](docs/planning/project-vision.md)
- [Backlog Inicial](docs/planning/backlog.md)
- [Roadmap](docs/planning/roadmap.md)

### 2. Fluxo de Trabalho
- [Desenvolvimento vs Produção](docs/workflow/development-vs-production.md)
- [Organização da Equipe](docs/workflow/team-organization.md)
- [Quadro Kanban (Evidência Real)](docs/workflow/kanban.md)
- [Cronograma de Gantt](docs/workflow/gantt.md)

### 3. Evidências
- [Histórico de Versionamento e Colaboração](docs/evidences/version-control/evidence-list.md)
---

## Estrutura do Repositório
```txt
README.md
docs/
 ├── planning/   # Documentos de visão e metas
 ├── workflow/   # Processos e métodos (Kanban/Gantt)
 └── evidences/  # Prints e fotos comprobatórias
src/             # Código-fonte (em desenvolvimento)

# 📚 Documentação

A documentação do projeto está organizada na pasta `docs`, contendo os documentos de planejamento, arquitetura, fluxo de desenvolvimento e gerenciamento do projeto.

## Planejamento

| Documento | Descrição |
|-----------|-----------|
| [Plano de Execução](docs/planning/plan-of-execution.md) | Planejamento geral do desenvolvimento do projeto, cronograma, organização da equipe, Sprints e entregas. |
| [Problem Analysis](docs/planning/problem-analysis.md) | Análise do problema, justificativa da solução e evidências da necessidade do sistema. |
| [Feature Impact](docs/planning/feature-impact.md) | Relação entre os problemas identificados, as funcionalidades implementadas e seus benefícios. |
| [Backlog](docs/planning/backlog.md) | Lista priorizada das funcionalidades do projeto. |
| [Roadmap](docs/planning/roadmap.md) | Planejamento evolutivo das funcionalidades previstas. |
| [Gantt Chart](docs/planning/gantt-chart.md) | Cronograma das atividades desenvolvidas durante o projeto. |

---

## Fluxo de Desenvolvimento

| Documento | Descrição |
|-----------|-----------|
| [Sprint Model](docs/workflow/sprint-model.md) | Organização das Sprints utilizadas durante o desenvolvimento. |
| [Team Responsibilities](docs/workflow/team-responsibilities.md) | Responsabilidades atribuídas a cada integrante da equipe. |
| [Semantic Versioning](docs/workflow/semantic-versioning.md) | Estratégia de versionamento adotada para acompanhar a evolução do projeto. |

---

## Arquitetura

| Documento | Descrição |
|-----------|-----------|
| [Architecture Overview](docs/architecture/architecture-overview.md) | Descrição da arquitetura do sistema e integração entre seus componentes. |

---

## Fundamentação

A fundamentação teórica utilizada no desenvolvimento encontra-se disponível na documentação complementar entregue juntamente com o projeto, abordando:

- Internet das Coisas (IoT);
- ESP32;
- FastAPI;
- InfluxDB;
- AWS;
- Modified Z-Score.

---

## Controle de Versões

O projeto utiliza **Git** para controle de versões e **Semantic Versioning (SemVer)** para identificação das releases durante o desenvolvimento.
