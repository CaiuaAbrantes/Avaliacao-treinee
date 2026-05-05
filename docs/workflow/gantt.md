# Cronograma de Desenvolvimento (Gantt)

## Metodologia de Prazos
Para garantir a entrega da versão 1.0 até o final do terceiro bimestre, estruturamos nosso cronograma focando primeiro na estabilidade da comunicação entre o hardware (ESP32) e a persistência de dados (InfluxDB).

## Gráfico de Gantt (Visual)
![Gráfico de Gantt do Projeto](../../docs/evidences/gantt-digital.png)

## Marcos e Versionamento Semântico
Seguindo as diretrizes de maturidade do projeto, estabelecemos os seguintes marcos:

| Versão | Descrição | Prazo Estimado |
| :--- | :--- | :--- |
| **v0.1.0** | Planejamento, requisitos e estrutura de pastas (atual). | Maio/2026 |
| **v0.5.0** | Backend FastAPI funcional com conexão ao InfluxDB. | Junho/2026 |
| **v0.9.0** | Integração total: ESP32 enviando dados em tempo real. | Agosto/2026 |
| **v1.0.0** | Sistema em produção, testado e documentado. | Setembro/2026 |

## Detalhamento das Etapas
1. **Setup Inicial:** Configuração do ambiente Docker e repositório.
2. **Firmware Base:** Desenvolvimento da lógica de leitura dos sensores no ESP32.
3. **API Core:** Construção dos endpoints de recepção de dados.
4. **Homologação:** Testes de estresse e validação da integridade dos dados.
