# Trabalho de Conclusão de Curso (TCC) - Documentação

## 1. Introdução

[cite_start]A Internet das Coisas (IoT) tem promovido mudanças significativas na forma como dispositivos físicos interagem com sistemas computacionais, ampliando a capacidade de coleta, transmissão e processamento de dados em diferentes contextos de aplicação[cite: 2]. [cite_start]Esse paradigma tecnológico possibilita a integração entre sensores, equipamentos e serviços digitais, favorecendo a obtenção contínua de informações provenientes do ambiente monitorado[cite: 3]. De acordo com Gubbi et al. (2013)[cite_start], a IoT constitui uma infraestrutura capaz de conectar objetos físicos à internet, permitindo a construção de sistemas distribuídos voltados ao monitoramento e à automação de processos[cite: 4].

[cite_start]A crescente adoção dessas tecnologias tem impulsionado o desenvolvimento de sistemas de monitoramento capazes de acompanhar variáveis operacionais em tempo real[cite: 5]. [cite_start]Em ambientes industriais, comerciais e laboratoriais, o acompanhamento contínuo de parâmetros físicos contribui para a identificação de alterações de comportamento, redução de interrupções operacionais e suporte à tomada de decisões baseada em dados[cite: 6]. [cite_start]Segundo Lee, Bagheri e Kao (2015), a evolução da Indústria 4.0 ampliou a utilização de sistemas inteligentes voltados à supervisão de processos, manutenção preditiva e integração entre o mundo físico e o digital[cite: 7].

[cite_start]Entretanto, a simples aquisição de dados não garante a geração de informações relevantes para os responsáveis pela operação dos sistemas monitorados[cite: 8]. [cite_start]O elevado volume de dados produzido continuamente por sensores torna necessária a utilização de mecanismos capazes de processar e interpretar essas informações de maneira automatizada[cite: 9]. [cite_start]Nesse contexto, a detecção de anomalias destaca-se como uma importante área de estudo, sendo utilizada para identificar comportamentos que divergem do padrão esperado[cite: 10]. [cite_start]Conforme Chandola, Banerjee e Kumar (2009, p. 2), anomalias podem ser compreendidas como *“patterns in data that do not conform to expected behavior”*, característica que reforça sua relevância em aplicações de monitoramento contínuo[cite: 11].

> **Problema de Pesquisa:**
> [cite_start]Como desenvolver uma arquitetura de monitoramento inteligente baseada em Internet das Coisas, capaz de coletar, armazenar e analisar dados em tempo real, identificando anomalias de forma eficiente, adaptável e utilizando tecnologias de baixo custo e ampla disponibilidade no mercado? [cite: 12]

[cite_start]Para responder a essa questão, o objetivo geral deste trabalho consiste em desenvolver um sistema de monitoramento inteligente baseado em IoT, capaz de coletar, transmitir, armazenar e analisar dados provenientes de sensores, empregando técnicas estatísticas para identificação de anomalias[cite: 13]. [cite_start]Como objetivos específicos, busca-se implementar a aquisição de dados por meio de dispositivos embarcados, estabelecer uma infraestrutura de comunicação em nuvem, estruturar o armazenamento de séries temporais e aplicar métodos de análise capazes de detectar comportamentos discrepantes nos dados coletados[cite: 14].

[cite_start]Quanto aos procedimentos metodológicos, esta pesquisa caracteriza-se como aplicada, de natureza tecnológica e abordagem predominantemente quantitativa[cite: 15]. [cite_start]Seu desenvolvimento envolve levantamento bibliográfico acerca de Internet das Coisas, computação em nuvem, bancos de dados para séries temporais e métodos estatísticos de detecção de anomalias, além da implementação e validação de uma arquitetura computacional destinada ao monitoramento contínuo de variáveis operacionais[cite: 16]. [cite_start]Conforme Marconi e Lakatos (2022), pesquisas aplicadas possuem como finalidade a geração de conhecimentos voltados à solução de problemas específicos, característica que fundamenta a proposta desenvolvida neste estudo[cite: 17].

---

## 2. Objetivos

### 2.1 Objetivo Geral
[cite_start]Desenvolver um sistema inteligente de monitoramento baseado em Internet das Coisas (IoT), capaz de realizar a coleta, transmissão, armazenamento e análise de dados provenientes de sensores, utilizando técnicas estatísticas para identificação automática de anomalias em tempo real[cite: 18, 19].

### 2.2 Objetivos Específicos
* [cite_start]**Levantamento Bibliográfico:** Realizar levantamento bibliográfico sobre Internet das Coisas, sistemas embarcados, arquiteturas de comunicação em nuvem, bancos de dados para séries temporais e métodos estatísticos de detecção de anomalias, visando fornecer embasamento teórico para o desenvolvimento da arquitetura proposta[cite: 20, 21].
* [cite_start]**Sistema Embarcado:** Desenvolver um sistema embarcado de aquisição de dados, utilizando o microcontrolador ESP32 para coleta periódica das informações fornecidas pelos seus sensores e sua posterior transmissão para a infraestrutura computacional do sistema[cite: 22].
* [cite_start]**Infraestrutura Cloud:** Implementar uma infraestrutura de comunicação em nuvem da AWS capaz de receber, organizar e encaminhar os dados provenientes dos dispositivos embarcados de forma segura e confiável[cite: 23].
* [cite_start]**Desenvolvimento da API:** Desenvolver uma API utilizando o framework FastAPI para recepção, validação e processamento das informações transmitidas pelos sensores, permitindo a integração entre os diferentes componentes da arquitetura proposta[cite: 24].
* [cite_start]**Armazenamento:** Estruturar o armazenamento dos dados em um banco de dados InfluxDB especializado em séries temporais, possibilitando o registro histórico das medições e a realização de consultas para fins de monitoramento e análise[cite: 25].
* [cite_start]**Algoritmo Analítico:** Implementar um algoritmo de detecção de anomalias baseado no método estatístico Modified Z-Score, permitindo a identificação automática de comportamentos anormais nos dados monitorados[cite: 26].
* [cite_start]**Validação:** Validar o funcionamento da arquitetura proposta por meio de testes de coleta, transmissão, armazenamento e processamento dos dados, verificando a capacidade do sistema em detectar anomalias de forma eficiente[cite: 27].
* [cite_start]**Avaliação de Aplicabilidade:** Avaliar a aplicabilidade da solução desenvolvida como ferramenta de monitoramento contínuo e suporte à manutenção preditiva em ambientes que demandem acompanhamento permanente de variáveis operacionais[cite: 28].

---

## 3. Fundamentação Teórica

### 3.1 Internet das Coisas (IoT)
[cite_start]A Internet das Coisas (*Internet of Things* – IoT) constitui um dos principais paradigmas tecnológicos da atualidade, promovendo a integração entre dispositivos físicos, sensores, sistemas computacionais e serviços em rede[cite: 30, 31]. Segundo Gubbi et al. (2013)[cite_start], a IoT pode ser compreendida como uma infraestrutura global capaz de conectar objetos inteligentes por meio da internet, permitindo coleta, processamento e compartilhamento de informações em tempo real[cite: 32]. [cite_start]Essa abordagem amplia significativamente a capacidade de monitoramento e automação em diferentes setores da sociedade, contribuindo para a transformação digital de processos produtivos e operacionais[cite: 33].

[cite_start]O conceito de IoT está fundamentado na ideia de que objetos físicos podem ser equipados com sensores, capacidade computacional e mecanismos de comunicação, tornando-se capazes de interagir com outros dispositivos e sistemas sem intervenção humana constante[cite: 34]. [cite_start]De acordo com Atzori, Iera e Morabito (2010), a Internet das Coisas representa a convergência entre tecnologias de comunicação, sistemas embarcados e processamento distribuído, criando ambientes inteligentes capazes de responder dinamicamente às informações coletadas do meio físico[cite: 35].

[cite_start]A arquitetura básica de sistemas IoT é geralmente organizada em 3 camadas principais[cite: 36, 37]:
1. [cite_start]**Camada de Percepção:** Responsável pela coleta dos dados por meio de sensores e atuadores[cite: 37].
2. [cite_start]**Camada de Rede:** Realiza a comunicação e o transporte de dados entre dispositivos e servidores[cite: 38].
3. [cite_start]**Camada de Aplicação:** Disponibiliza os serviços, dashboards e funcionalidades aos usuários finais[cite: 39].

[cite_start]No contexto deste trabalho, a Internet das Coisas representa a convergência entre aquisição de dados, processamento computacional e análise inteligente das informações coletadas, transformando dados operacionais em conhecimento acionável por meio de uma arquitetura autônoma e preditiva[cite: 50, 51, 52, 53].

### 3.2 Microcontrolador ESP32
[cite_start]O avanço da IoT ampliou significativamente a necessidade de dispositivos embarcados capazes de realizar aquisição, processamento e transmissão de dados de forma eficiente, confiável e economicamente viável[cite: 54, 55]. [cite_start]Nesse cenário, o microcontrolador ESP32 tem sido amplamente utilizado tanto em projetos acadêmicos quanto industriais[cite: 56].

[cite_start]Sua arquitetura *dual-core*, aliada ao suporte nativo à conectividade sem fio (Wi-Fi e Bluetooth), permite que o dispositivo execute tarefas de coleta contínua de dados com desempenho adequado[cite: 57, 58]. [cite_start]Maier, Sharp e Vagapov observam que o dispositivo representa uma solução prática para *"wireless sensor network applications requiring low cost and reliable connectivity"*[cite: 59]. 

[cite_start]No presente trabalho, o ESP32 assume a função essencial de ler periodicamente os sensores, pré-processar as informações e realizar a transmissão estruturada dos dados ao backend em FastAPI, operando como o elo entre o ambiente físico e a nuvem[cite: 62, 65].

### 3.3 FastAPI como Backend
[cite_start]O desenvolvimento de sistemas IoT exige infraestruturas de backend robustas para gerenciar grandes volumes de dados de dispositivos distribuídos[cite: 75, 76]. [cite_start]O FastAPI destaca-se como um framework moderno para Python voltado para alta concorrência[cite: 78].

* [cite_start]**Alto Desempenho:** Construído sob o padrão ASGI (*Asynchronous Server Gateway Interface*), permitindo o gerenciamento assíncrono de múltiplas requisições simultâneas de sensores[cite: 79, 80].
* [cite_start]**Documentação Automática:** Geração nativa de documentação interativa por meio de OpenAPI e Swagger, facilitando testes e manutenção[cite: 82, 83].
* [cite_start]**Produtividade:** Reduz drasticamente o tempo de desenvolvimento de novas funcionalidades sem comprometer a performance da aplicação[cite: 85, 86].

[cite_start]Nesta arquitetura, o FastAPI atua como o intermediador central responsável por receber os dados do ESP32, validá-los e orquestrar a gravação no InfluxDB e o processamento no worker estatístico[cite: 88].

### 3.4 Banco de Dados InfluxDB
[cite_start]Bancos de dados relacionais tradicionais costumam apresentar limitações de performance quando submetidos a altas taxas de ingestão contínua de séries temporais[cite: 92, 95]. [cite_start]O InfluxDB é um banco de dados NoSQL desenvolvido especificamente para lidar com dados indexados pelo tempo[cite: 96].

[cite_start]Tripathi, Miraz e Joshi (2023), no artigo *Comparative Analysis of MongoDB and InfluxDB for Time Series Data Management in IoT Environments*, concluíram que o InfluxDB apresenta desempenho superior em cenários de alta frequência de escrita, gerenciamento temporal e consultas analíticas[cite: 100]. [cite_start]A sua adoção no projeto garante o registro histórico otimizado necessário para as análises preditivas[cite: 25, 102].

### 3.5 Método Estatístico Modified Z-Score (Z-Score Modificado)
[cite_start]Para garantir o baixo custo computacional exigido pelo sistema, utilizam-se abordagens estatísticas pela sua simplicidade e consistência analítica[cite: 104, 105, 106]. [cite_start]Enquanto o Z-Score tradicional é altamente influenciado por valores extremos (pois utiliza a média e o desvio padrão), o **Modified Z-Score** proposto por Iglewicz e Hoaglin (1993) contorna essa limitação ao utilizar métricas robustas como a **mediana** e o **MAD** (*Median Absolute Deviation*)[cite: 107, 108].

O cálculo do Modified Z-Score é definido pelas seguintes equações matemáticas:

[cite_start]$$M_i = 0.6745 \cdot \frac{(x_i - \tilde{x})}{MAD}$$ [cite: 109]

Onde o $MAD$ é calculado como:

[cite_start]$$MAD = \text{median}(|x_i - \tilde{x}|)$$ [cite: 109]

* [cite_start]$x_i$: Valor atual analisado[cite: 110].
* [cite_start]$\tilde{x}$: Mediana dos dados[cite: 110].
* [cite_start]$MAD$: Mediana dos desvios absolutos[cite: 111].

[cite_start]Limiares de corte (*thresholds*) clássicos como $2.5$ ou $3.5$ são frequentemente utilizados para a classificação de outliers[cite: 112]. [cite_start]No entanto, esses valores podem ser dinamicamente calibrados e reduzidos para limites menores (como $1.5$ ou $2.0$) para aumentar a sensibilidade preventiva do monitoramento em cenários industriais críticos[cite: 113, 114, 115].

### 3.6 Amazon API Gateway e Infraestrutura AWS
[cite_start]A integração entre IoT e computação em nuvem constitui a base para viabilizar o processamento e o armazenamento em larga escala[cite: 120, 122]. [cite_start]A infraestrutura deste projeto apoia-se em serviços da **Amazon Web Services (AWS)**[cite: 123]:

* [cite_start]**Amazon API Gateway:** Camada de comunicação encarregada de disponibilizar endpoints seguros e escaláveis que recebem as requisições enviadas pelos dispositivos embarcados[cite: 125, 126].
* [cite_start]**AWS Lambda:** Plataforma computacional *serverless* (sem servidor) que executa o código sob demanda apenas quando requisições são recebidas, otimizando os custos e fornecendo escalabilidade automática[cite: 128, 129, 131].
* [cite_start]**Amazon CloudWatch:** Ferramenta de observabilidade utilizada para o registro de eventos (*logs*), monitoramento operacional e rastreabilidade de falhas na comunicação[cite: 134, 135].
