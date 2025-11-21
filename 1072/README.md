# Problema:

Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida. Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

> Link do problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1072

---

# Resolução:

Primeiro, vamos declarar as variáveis necessárias. Precisaremos de cinco variáveis inteiras: uma para contar os valores dentro do intervalo, outra para os valores fora do intervalo, uma variável para funcionar como contador do `for()`, além da variável N, que será lida na entrada, e o valor X.
 ```c
 int cont, n, x, dentro=0, fora=0;
 ```

 Agora iremos utilizar o `for()` para analisar cada valor de X separadamente. Dentro dele iremos ler um valor de X e verificar se ele está dentro do intervalo ou não utilizando if e else, caso seja verdadeiro adicionamos 1 a variável dentro, caso contrário adicionamos na variável fora.

 ```c
 for(cont=0; cont<n; cont++){
    scanf("%d", &valor);
    if(valor>=10 && valor<=20)
        dentro++;
    else
        fora++;
}
```
Por fim, imprimimos na tela quantos estão dentro do intervalo e quantos estão fora. Lembre-se de utilizar o \n no final, pois o Beecrowd costuma ser bem exigente com a saída da resolução do problema.

```c
printf("%d in\n", dentro);
printf("%d out\n", fora);
```

