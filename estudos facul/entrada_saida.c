#include <stdio.h>

    int main () {
    int idade = 25;
    float altura = 1.80;
    char opcao = 'C';
    char nome[20] = "Calebe";


    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura é: %.2f\n", altura);
    printf("A opcao é: %c\n", opcao);


    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);



    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("A altura é: %.2f", altura);


    printf("Digite a opçao: \n");
    scanf(" %c", &opcao);
    printf("Seu nome é: %c", nome);
}