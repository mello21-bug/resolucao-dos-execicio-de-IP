# Problema

Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

###### Problema completo: https://www.urionlinejudge.com.br/judge/pt/problems/view/1175

# Resolução

O exercício pede uma solução para inverter a última possição com a primeira e repetir essa ação pras outras até atingir o ponto médio que é no caso 10ª e 11ª posição:

                                0
                                -5
                                ...
                                63
                                230

Portanto a saída do exercício fica com essa característica:        

                                N[0] = 230
                                N[1] = 63
                                ...
                                N[18] = -5
                                N[19] = 0

Iremos iniciar o exercício declarando as variáveis que iremos usar, incluindo o `N[20]` que também deve possuir um tipo e no caso do exercício em questão é `int`:
```c
    int N[20];
    int i, temp;    
```
Faremos a leitura dos valores que o vetor `N[20]` irá receber:

```c
        for(i=0; i<20; i++)
                scanf("%d",&N[i]);
```
Damos sequência à lógica do exercício realizando as trocas entre as posições do vetor. Primeiro, usamos a variável `temp` para armazenar temporariamente o valor atual de `N[i]`. Em seguida, fazemos `N[i] = N[19 - i];`, o que coloca na posição inicial o elemento correspondente da extremidade final do vetor. Por fim, recuperamos o valor salvo em `temp` e o colocamos na posição` N[19 - i]`.

Essa lógica garante que o primeiro elemento seja trocado com o último, o segundo com o penúltimo, e assim por diante. Usar `19 - i` assegura que acessamos corretamente as posições finais do vetor de forma decrescente.

O loop vai somente até `i < 10` porque, ao realizar as primeiras 10 trocas, já teremos invertido todas as posições necessárias. Como o vetor tem 20 elementos, cada troca envolve duas posições; portanto, após 10 iterações, todas as posições já foram permutadas sem que nenhuma seja alterada duas vezes.

```c
      for (i = 0; i < 10; i++) {
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }
  

    
```
E, para finalizar, precisamos mostrar a saída. Para isso devemos utilizar um `for` para percorrer todo o vetor, printando em cada posição (representada por `i`):

```c
        for(i=0; i<20; i++)
                printf("N[%d] = %d\n",i,N[i]);

```