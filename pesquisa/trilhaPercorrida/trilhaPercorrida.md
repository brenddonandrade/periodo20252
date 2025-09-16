# Anotações do que eu fiz para ajudar quem está começando.

Este documento serve para auxiliar no caminho de quem está começando com em séries temporais no nosso grupo de pesquisa.

## Linha do tempo dos arquivos

Os arquivos seguem uma linha do tempo, de acordo com as tarefas que me foram dadas. Assim, eu tentei separar o que pode ter relação da minha pesquisa com as de vocês.

1. 13\_08\_24.ipynb e 13\_08\_24.txt:
    O arquivo texto possui a tarefa que me foi dada e o notebook, a execução da tarefa.
    Neste processo estou:
        - Baixando os dados do mercado financeiro utilizando o yfinance (pode ser útil se quiser algum dado rápido para testar algo).
        - Tratando os dados: aqui o tratamento é feito de forma incorreta. Usar "dataframe.dropna()" você retira os dados NaN, excluindo os dias que possuem estes valores. A maneira correta de se fazer isso é preencher os valores de alguma forma (como a média dos valores, por exemplo).  
       - Fazendo análise de autocorrelação dos dados: Esse passo é uma ferramenta essencial. Por ele você consegue descobrir muitas coisas do dado estudado, como por exemplo: sasonalidade, feeling do timestep utilizado para treinar um modelo de machine learning (esse aqui é um conceito mais aprofundado que vocês usaram em breve).
        - Análise de correlação cruzada.
        - Cálculo de entropia.
        - Os dois últimos itens eu não cheguei a pesquisar melhor o que realmente significam. Pesquisem mais sobre se desejarem.

2. LSTMModelsForTimeSeriesForecasting.ipynb:
    Esse arquivo é o mais importante desse ROADMAP. Neste há um Plologo de ideias referente aos modelos LSTM feito pelo ChatGPT, um tutorial do Jason Brownlee sobre como criar um modelo LSTM (muito importante que leia para entender melhor a mecânica de se fazer uma previsão usando modelos deep learning. 

3. applyingLSTMInLoad.ipynb:
   Aqui há um passo "completo" de uma análise feita sobre dados de carregamento de energia das regiões do brasil. Há basicamente três grandes seções, sendo: tratamento de dados, análise exploratória e aplicações de modelos de previsão (esses tipos de modelos são melhores explorados no site de referência do arquivo do tópico 2).  

Vou anexar o arquivo de load.csv para vocês poderem obter os próprios resultados.

