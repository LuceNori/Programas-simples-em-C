/*  Nome Autor: colocar o nome do aluno
    Data: 19/07/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float somaNumero(float num1, float num2);
float subNumero(float num1, float num2);
float multNumero(float num1, float num2);
float divideNumero(float num1, float num2);

float somaNumero(float num1, float num2){
    return num1+num2;
}
float subNumero(float num1, float num2){
    return num1-num2;
}
float multNumero(float num1, float num2){
    return num1*num2;
}
float divideNumero(float num1, float num2){
    return num1/num2;
}

int main() {
setlocale(LC_ALL, "Portuguese");
float n=0,n2=0;
int op=4;
float result,result2,result3,result4;
while (op<5){
printf("\n *******   SISTEMA DE CÁLCULO*******   \n");
    printf("\n Escolha a opção! ");
    printf("\n Opção 1: somar");
    printf("\n Opção 2: subtrair");
     printf("\n Opção 3: dividir");
    printf("\n Opção 4: multiplicar");
     printf("\n Opção 5: sair");
    printf("\n Digite a opção desejada: ");
    scanf("%d", &op);
        switch(op){
            case 1:
                printf("\n Opção 1.\n ");
                 printf("\n Escolha os numeros para realizar a operacao:");
                 scanf("%f %f",&n,&n2);
                 result = somaNumero(n,n2);
                 printf("\no resultado da soma: %f\n", result);
                  continue;
            case 2:
                 printf("\n Opção 2.\n ");
                 printf("\n Escolha os numeros para realizar a operacao:");
                 scanf("%f %f",&n,&n2);
                  result2 = subNumero(n,n2);
                  printf("\no resultado da subtracao: %f\n", result2);
                  continue;
            case 3:
                 printf("\n Opção 3.\n ");
                 printf("\n Escolha os numeros para realizar a operacao:");
                 scanf("%f %f",&n,&n2);
                  result3 = divideNumero(n,n2);
                  printf("\no resultado da multiplicacao: %f\n", result3);
                  continue;
            case 4:
                 printf("\n Opção 4.\n ");
                 printf("\n Escolha os numeros para realizar a operacao:");
                 scanf("%f %f",&n,&n2);
                  result4 = multNumero(n,n2);
                  printf("\no resultado da divisao: %f\n", result4);
                  continue;
            default:  printf("\n Saindo.\n ");
        }
}
printf("\n *******   SISTEMA FINALIZADO *******   \n");
return 0;
}