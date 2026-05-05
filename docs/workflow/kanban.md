# Fluxo de Trabalho: Kanban

## Por que utilizamos o Kanban?
Para este projeto de monitoramento térmico com ESP32, escolhemos o método Kanban para garantir a visualização clara do fluxo de dados e do desenvolvimento do software. Como trabalhamos com integração entre hardware e backend (FastAPI), o Kanban nos permite:
- Limitar o trabalho em progresso (WIP) para evitar gargalos na integração do firmware com a API.
- Identificar rapidamente se a etapa de validação de dados no InfluxDB está atrasando o roadmap.
- Proporcionar transparência para a equipe sobre o estado de cada sensor e endpoint desenvolvido.

## Evidência Real (Quadro Físico)
Conforme exigido pelas diretrizes da avaliação, mantivemos um quadro físico para a gestão das nossas sprints iniciais. Este quadro reflete as tarefas reais de configuração de hardware e ambiente de banco de dados.

![Evidência do Kanban Físico](../../docs/evidences/kanban-foto.jpg)

## Detalhamento das Tarefas Reais
As tarefas listadas no quadro físico incluem:
- **Backlog:** Implementar Deep Sleep no ESP32; Criar dashboard histórico.
- **A Fazer:** Configurar biblioteca HTTPClient no ESP32; Dockerizar backend FastAPI.
- **Em andamento:** Desenvolver endpoint POST /sensor-data; Validar recepção de JSON.
- **Concluído:** Definição da pinagem do sensor; Configuração inicial do InfluxDB.
