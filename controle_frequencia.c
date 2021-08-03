#include<stdio.h>
int cargaHorariaTotal=120;

void menuPrincipal();
void registraPresenca(int *presente, int *faltas, int qtdAulas){
    int presente1;
	printf("Quantas presencas voce teve?:");
	scanf("%d",&presente1);
	*faltas =*faltas+ ( qtdAulas - presente1);
	*presente=*presente+presente1;
}
void justificaFalta (int *presente, int *faltas, int faltaJustificada){
	*presente += faltaJustificada;
	*faltas -= faltaJustificada;
}
void resumoFaltas(int presente, int faltas){
	printf("-----Resumo Das Frequencias-----");
	printf("\nQuantidade de frequencia:%d", presente);
	printf("\nQuantidade de Faltas:%d", faltas);
}


int main(){
    int faltaJustificada;
	int op=4;
	const int qtdAulas=2;
	int presente=0, faltas=0;
	while(1){

	printf("\n-----SISTEMA DE FREQUENCIA-----");
	printf("\nMenu principal:");
	printf("\n1.Registrar presenca");
	printf("\n2.Justificar falta");
	printf("\n3.Resumo de faltas");
	printf("\n4.Sair");
	printf("\nDigite a escolha desejada: ");
    scanf("%d", &op);
	switch(op){
            case 1:
                printf("\n 1.\n ");
                registraPresenca(&presente,&faltas,qtdAulas);
                  continue;
            case 2:
                printf("\n 2.\n ");
              	printf("Quantas faltas voce pode justificar?:");
				scanf("%d",&faltaJustificada);
              	justificaFalta(&presente,&faltas,faltaJustificada);
                  continue;
            case 3:
                printf("\n 3.\n ");
                resumoFaltas(presente,faltas);
                  continue;
            case 4:
                 printf("\n 4.");
      			 printf("\n Saindo.");
      			 return 0;
        }
    }
		return 0;
}
