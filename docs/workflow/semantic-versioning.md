
# Semantic Versioning

## Objetivo

Este documento apresenta a estratégia de versionamento adotada para o projeto. O objetivo é registrar a evolução do sistema de maneira organizada, permitindo identificar as funcionalidades implementadas em cada versão e acompanhar o desenvolvimento até a entrega da versão final.

O projeto utiliza como referência o padrão **Semantic Versioning (SemVer)**, no qual cada versão é representada pelo formato:

**MAJOR.MINOR.PATCH**

Onde:

* **MAJOR**: alterações incompatíveis ou lançamento de uma nova versão principal;
* **MINOR**: inclusão de novas funcionalidades mantendo compatibilidade;
* **PATCH**: correções de erros e pequenos ajustes.

Como o sistema ainda está em desenvolvimento, as versões anteriores à entrega final são representadas pela série **0.x.x**.

---

# Planejamento das versões

| Versão | Descrição                                                                                                     |
| ------ | ------------------------------------------------------------------------------------------------------------- |
| 0.1.0  | Estrutura inicial do projeto, definição da arquitetura e configuração do repositório.                         |
| 0.2.0  | Desenvolvimento da aquisição de dados utilizando ESP32.                                                       |
| 0.3.0  | Implementação da API para recebimento das leituras e integração com o banco de dados.                         |
| 0.4.0  | Desenvolvimento do worker responsável pelo processamento das leituras e detecção de anomalias.                |
| 0.5.0  | Implementação da interface para consulta das informações processadas.                                         |
| 0.6.0  | Integração completa entre todos os componentes do sistema.                                                    |
| 0.7.0  | Testes integrados, validações e correções identificadas durante a fase de desenvolvimento.                    |
| 1.0.0  | Primeira versão estável entregue para utilização, contendo todas as funcionalidades previstas para o projeto. |

---

# Controle das versões

Cada nova funcionalidade implementada será registrada por meio de commits no GitHub e associada à versão correspondente no planejamento do projeto.

Essa estratégia facilita o acompanhamento da evolução do sistema, permite identificar quais funcionalidades compõem cada versão e mantém consistência entre a documentação, o histórico de desenvolvimento e as entregas realizadas ao longo das sprints.
