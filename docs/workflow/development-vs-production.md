# Separação entre Desenvolvimento e Produção

Neste projeto, adotamos uma estratégia de separação rigorosa para garantir a integridade do sistema de monitoramento e a segurança das credenciais de acesso ao banco InfluxDB.

## 1. O que pertence a cada ambiente?

*   **Ambiente de Desenvolvimento (Local):**
    *   Scripts de teste de sensores e simulação de dados.
    *   Arquivos de configuração local (`.env` contendo chaves de teste).
    *   Notebooks de análise de dados exploratória.
*   **Ambiente de Produção (Nuvem/AWS):**
    *   Código estável da API FastAPI.
    *   Firmware final do ESP32 (versões compiladas).
    *   Configurações de rede e segurança para o InfluxDB em produção.

## 2. Como evitamos a publicação de arquivos sensíveis?

Utilizamos um arquivo **`.gitignore`** configurado para impedir que arquivos de ambiente local, bibliotecas de terceiros (como `venv/` ou `node_modules/`) e documentos de rascunho sejam publicados no GitHub.

## 3. Fluxo de Trabalho (Branching Strategy)

Baseado no conceito de **GitHub Flow**, nossa equipe utiliza o seguinte fluxo:
*   **Branch `main`:** Representa o código em produção (Versão 1.0 futuramente).
*   **Feature Branches:** Cada nova funcionalidade (ex: `feat/conexao-sensor`) é desenvolvida em uma branch separada e só é integrada à `main` após passar por testes locais e revisão de código.

## 4. Justificativa da Abordagem

Escolhemos essa estratégia por ser ágil e permitir que o desenvolvimento do firmware do ESP32 ocorra de forma isolada do desenvolvimento do backend, evitando conflitos de versão e garantindo que o histórico do Git permaneça limpo e organizado.
