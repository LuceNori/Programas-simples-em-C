//calculo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Método: é um avanço das procedures (não retorna valor, tela, impressão) e funções(retorna um valor)
prototipação de método ou interfaces ou assinaturas de métodos

tipo_retorno nomeMetodo(parametros);

*/
float somaNumero(float num1, float num2);
float subNumero(float num1, float num2);
float multNumero(float num1, float num2);
float divideNumero(float num1, float num2);
/* implementação dos métodos*/
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
float result,result2,result3,result4;
/* utilizando método, chamar um método, call*/
    result = somaNumero(6, 4);
    printf("\no resultado da soma: %f\n", result);
    result2 = subNumero(3, 1);
    printf("\no resultado da subtracao: %f\n", result2);
    result3 = multNumero(6, 4);
    printf("\no resultado da multiplicacao: %f\n", result3);
    result4 = divideNumero(16, 4);
    printf("\no resultado da divisao: %f\n", result4);

return 0;
}