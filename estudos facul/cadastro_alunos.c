#include <stdio.h> 


int main () {
    int idade, matricula; 
    float altura; 
    char nome[50];


    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Nome do aluno: %s / Matricula: %d\n", nome, matricula);
    printf("Idade do aluno: %d / Altura: %f\n", idade, altura);

}