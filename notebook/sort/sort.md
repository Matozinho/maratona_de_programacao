# Algoritmos de ordenação

Como o nome sugere, esses algoritmos *ordenam* uma dada estrutura de dados com base em um critério de comparação pré-estabelecido.

### Links úteis  

* [geeksforgeeks](https://www.geeksforgeeks.org/sorting-algorithms/) 
* [brilliant.org](https://brilliant.org/wiki/sorting-algorithms/) 
* [wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm) 
* [Video intuitivo](https://youtu.be/kPRA0W1kECg)

TODO:
- [x] Bubble Sort
- [x] Shaker Sort
- [ ] Selection Sort
- [ ] Insertion Sort
- [ ] Shell Sort
- [ ] Merge Sort
- [ ] Quick Sort

  
## Bubble Sort

### Descrição:  

   Algoritmo simples e intuitivo.Sendo *n* a quantidade de elementos da estrutura, esse algoritmo a itera a estrutura *n-1* vezes trocando elementos adjacentes.Uma possível otimização é percorrer a estrutura somente até não ter sido feita nenhuma troca em uma iteração.Além disso, depois de *k* iterações, os últimos *k* elementos já estarão ordenados.Apesar de não oferecer nenhuma vantagem em relação a abordagem iterativa, o Bubblesort pode ser implementado recursivamente.

### Exemplo:  

Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

**Média**: *O(n^2)*  

**Pior Caso**: *O(n^2)* , ocorre quando a estrutura está ordenada de maneira inversa ao critério utilizado.  

**Melhor Caso**: *O(n)* , ocorre quando a estrutura já está ordenada.  

### Observações e Links úteis:  

* É **estável**(mantém a ordem dos elementos com chaves de ordenação iguais).
* Não necessita de espaço extra.

* [Vídeo 1](https://youtu.be/nmhjrI-aW5o)
* [Vídeo 2](https://youtu.be/lyZQPjUT5B4)
  
   
## (Cocktail) Shaker Sort  

### Descrição:  

   Variação do Bubble Sort.Ao passo que o Bubble Sort percorre e troca os elementos da estrutura em uma direção por iteração, o Shaker Sort percorre e troca os elementos nas duas direções por iteração.

### Exemplo:  

Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

**Média**: *O(n^2)*  

**Pior Caso**: *O(n^2)* , ocorre quando a estrutura está ordenada de maneira inversa ao critério utilizado.  

**Melhor Caso**: *O(n)* , ocorre quando a estrutura já está ordenada.  

### Observações e Links úteis:  

Apesar do Shaker Sort possuir a mesma complexidade de tempo do Bubble Sort, ele é algumas vezes mais rápido.  

* É **estável**(mantém a ordem dos elementos com chaves de ordenação iguais).
* Não necessita de espaço extra.

* [Vídeo](https://youtu.be/nmhjrI-aW5o)


## Selection Sort

### Descrição:  

   Trabalha com a idéia de dois subarrays, um dos elementos já ordenados e outro de elementos desordenados.Dessa forma,Itera o subarray do elementos desordenados(inicialmente o array inteiro) trocando o menor elemento com o primeiro desse subarray.A cada iteração o limite inferior do subarray dos elementos desordenados e o limite superior do subarray dos ordenados aumenta.Assim, quando o subarray dos elementos desordenados tiver tamanho 1, o array estará ordenado.
   A mesma idéia pode ser implementada recursivamente, porém sem nenhuma vantagem em relação ao algoritmo iterativo.

### Exemplo:  

Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

**Média**: *O(n^2)*  

### Observações e Links úteis:  

O Selection Sort faz no máximo O(n) trocas, por isso é vantajoso quando a escrita na memória é uma operação custosa.

* A implementação vanilla **Não** é **estável**(**não** mantém a ordem dos elementos com chaves de ordenação iguais).
* Pode ser modificado a fim de se tornar estável.
* Não necessita de espaço extra.

* [Vídeo 1](https://youtu.be/xWBP4lzkoyM)
* [Vídeo 2](https://youtu.be/Ns4TPTC8whw)


## Insertion Sort

### Descrição:  

   Trabalha com a idéia de dois subarrays, um dos elementos já ordenados e outro de elementos desordenados.Dessa forma,Itera o subarray do elementos desordenados(inicialmente o array inteiro) trocando o menor elemento com o primeiro desse subarray.A cada iteração o limite inferior do subarray dos elementos desordenados e o limite superior do subarray dos ordenados aumenta.Assim, quando o subarray dos elementos desordenados tiver tamanho 1, o array estará ordenado.
   A mesma idéia pode ser implementada recursivamente, porém sem nenhuma vantagem em relação ao algoritmo iterativo.

### Exemplo:  

Disponível no arquivo de mesmo nome no diretório.

### Complexidade de tempo:  

**Média**: *O(n^2)*  

### Observações e Links úteis:  

O Selection Sort faz no máximo O(n) trocas, por isso é vantajoso quando a escrita na memória é uma operação custosa.

* A implementação vanilla **Não** é **estável**(**não** mantém a ordem dos elementos com chaves de ordenação iguais).
* Pode ser modificado a fim de se tornar estável.
* Não necessita de espaço extra.

* [Vídeo 1](https://youtu.be/xWBP4lzkoyM)
* [Vídeo 2](https://youtu.be/Ns4TPTC8whw)