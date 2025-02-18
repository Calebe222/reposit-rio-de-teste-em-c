#include <stdio.h>


int main () {
    int idade = 18;
    float altura = 1.80;
    double saldobancario = 250000;
    char inicial = 'C';
    char nome[20] = "Calebe";


    printf("Idade: %d anos \n", idade);
    printf("altura: %.4f metros \n", altura);
    printf("Saldo Bancário: %2.f reais \n", saldobancario);
    printf("Inicial do nome: %c \n", inicial);
    printf("Nome: %s \n", nome);
}