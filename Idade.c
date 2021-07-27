//idade
#include <stdio.h>
int main (){
    char nome[100];
    float Idade=0;
    char sexo;
    
    printf("Digite seu nome:");
    scanf("%s", nome);
    printf("Digite sua idade:");
    scanf("%f", &Idade);
    do {printf("Digite seu sexo(m ou f):");
    scanf(" %c", &sexo);}
    while(sexo!='f'&&sexo!='m');

    if((Idade>=18)&&(sexo=='m')) {
        printf("Time Adulto Masculino\n");
        
    }else{
        
        if((Idade>=18)&&(sexo=='f')) {
            printf("Time adulto Feminino\n");
        }
        if((Idade<18)&&(sexo=='m')) {
            printf("Time infantil Masculino\n");
        }
        if((Idade<18)&&(sexo=='f')) {
            printf("Time infantil feminino\n");
        }
        
    }
    }
