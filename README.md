# Sistema Inteligente de Monitoramento e Detecção de Anomalias (SIMDA)

Este repositório contém o planejamento, desenvolvimento e documentação do *Sistema Inteligente de Monitoramento e Detecção de Anomalias (SIMDA)*, uma solução baseada em Internet das Coisas (IoT) para coleta, armazenamento e análise inteligente de dados provenientes de sensores.

---

# Integrantes da Equipe

- *Caiuá Abrantes Lopes*
- *Paulo Henrique*
- *Tácio Matias*

---

# Objetivo do Projeto

Desenvolver um sistema inteligente de monitoramento capaz de coletar dados utilizando dispositivos ESP32, transmitir essas informações para uma infraestrutura em nuvem, armazená-las em um banco de dados especializado em séries temporais e identificar automaticamente comportamentos anômalos por meio de técnicas estatísticas.

## O sistema oferece

- Coleta automática de dados utilizando ESP32;
- Comunicação entre dispositivos e servidor por meio de API desenvolvida em FastAPI;
- Armazenamento das medições utilizando InfluxDB;
- Detecção automática de anomalias utilizando o algoritmo Modified Z-Score;
- Interface para visualização das informações processadas;
- Arquitetura preparada para expansão futura.

---

# Tecnologias Utilizadas

## Hardware

- ESP32
- Sensores de temperatura e umidade
- Comunicação Wi-Fi

## Software

- Python
- FastAPI
- InfluxDB
- AWS
- Git
- GitHub

## Gerenciamento

- Git
- GitHub
- Kanban
- Gráfico de Gantt
- Semantic Versioning (SemVer)

---

# Estado Atual do Projeto

*Versão Atual:* v0.1.0

Fase atual:

- Planejamento da arquitetura;
- Organização da documentação;
- Definição do fluxo de desenvolvimento;
- Estruturação dos componentes do sistema.

Próximo marco previsto:

*v0.5.0*

- Backend funcional;
- Banco de dados integrado;
- Comunicação entre os módulos.

---

# Documentação

Toda a documentação do projeto encontra-se organizada na pasta docs, permitindo acompanhar o planejamento, desenvolvimento e evolução da solução.

## Planejamento

| Documento | Descrição |
|-----------|-----------|
| [Plano de Execução](docs/planning/plan-of-execution.md) | Planejamento completo do desenvolvimento do projeto. |
| [Visão do Projeto](docs/planning/project-vision.md) | Objetivos, escopo e visão geral da solução. |
| [Problem Analysis](docs/planning/problem-analysis.md) | Identificação do problema e justificativa da solução proposta. |
| [Feature Impact](docs/planning/feature-impact.md) | Relação entre os problemas identificados e as funcionalidades implementadas. |
| [Backlog](docs/planning/backlog.md) | Lista priorizada das funcionalidades do projeto. |
| [Roadmap](docs/planning/roadmap.md) | Evolução planejada das funcionalidades. |

---

## Workflow

| Documento | Descrição |
|-----------|-----------|
| [Sprint Model](docs/workflow/sprint-model.md) | Organização das Sprints utilizadas durante o desenvolvimento. |
| [Team Responsibilities](docs/workflow/team-responsibilities.md) | Responsabilidades de cada integrante da equipe. |
| [Semantic Versioning](docs/workflow/semantic-versioning.md) | Estratégia de versionamento adotada para acompanhar a evolução do projeto. |
| [Kanban](docs/workflow/kanban.md) | Organização e acompanhamento das tarefas. |
| [Gantt](docs/workflow/gantt.md) | Cronograma das atividades do projeto. |

---

## Evidências

As evidências do desenvolvimento encontram-se na pasta docs/evidences, incluindo:

- histórico de versionamento;
- registros da evolução do projeto;
- capturas de tela;
- demais evidências utilizadas na documentação.

---

## Estrutura do Repositório

text
README.md

docs/
│
├── planning/
│   ├── plan-of-execution.md
│   ├── project-vision.md
│   ├── problem-analysis.md
│   ├── feature-impact.md
│   ├── backlog.md
│   └── roadmap.md
│
├── workflow/
│   ├── sprint-model.md
│   ├── semantic-versioning.md
│   ├── team-responsibilities.md
│   ├── kanban.md
│   └── gantt.md
│
├── evidences/
│   └── version-control/
│
└── architecture/
    └── (documentação da arquitetura)

src/
│
├── api/
├── worker/
├── esp32/
└── frontend/


---

# Controle de Versões

O projeto utiliza *Git* para controle das alterações e *Semantic Versioning (SemVer)* para identificação da evolução das versões durante o desenvolvimento.

---

# Licença

Este projeto foi desenvolvido para fins acadêmicos como atividade da disciplina de Engenharia de Software, podendo ser utilizado exclusivamente para estudos e demonstrações.
