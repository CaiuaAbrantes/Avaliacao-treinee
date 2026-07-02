
# Feature Impact

Este documento apresenta a relação entre os problemas identificados durante a análise do cenário atual, as funcionalidades desenvolvidas no sistema e os benefícios esperados com sua implementação.

| Problema identificado                                                                      | Funcionalidade                                                   | Benefício esperado                                                                                                                                         |
| ------------------------------------------------------------------------------------------ | ---------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------- |
| A identificação de anomalias depende da observação manual das leituras.                    | Worker de detecção automática de anomalias.                      | Elimina a necessidade de inspeção manual contínua, permitindo que leituras anômalas sejam identificadas automaticamente durante o processamento dos dados. |
| As informações coletadas não possuem armazenamento estruturado para consultas posteriores. | Banco de dados InfluxDB.                                         | Armazena grandes volumes de séries temporais de forma organizada, permitindo consultas rápidas e análise histórica das medições.                           |
| Não existe um mecanismo padronizado para comunicação entre os dispositivos e o sistema.    | API desenvolvida em FastAPI.                                     | Centraliza o recebimento das leituras, padroniza a comunicação entre os componentes e facilita futuras integrações.                                        |
| A coleta manual de informações dificulta o monitoramento contínuo.                         | ESP32 responsável pela aquisição e envio periódico das leituras. | Automatiza a coleta de dados, reduzindo a intervenção humana e aumentando a frequência das medições.                                                       |
| Não existe uma interface centralizada para consulta das informações processadas.           | Front-end para visualização das medições e anomalias.            | Permite que os usuários acompanhem rapidamente o estado do sistema, consultem o histórico e visualizem as anomalias detectadas.                            |

## Considerações

Cada funcionalidade foi projetada para solucionar um problema específico identificado durante a fase de levantamento de requisitos. Dessa forma, o sistema não representa apenas um conjunto de componentes tecnológicos, mas uma solução estruturada para reduzir a dependência de processos manuais, aumentar a confiabilidade do monitoramento e disponibilizar informações de forma organizada para apoio à tomada de decisão.
