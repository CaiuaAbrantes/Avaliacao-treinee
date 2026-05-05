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
