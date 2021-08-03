//tarefa vari

#include <stdio.h>
#include <stdlib.h>

float descontoTotal; 
float *valorVenda;
void menuPrincipal();

void caixaVenda(float valorUnitario, float quantidade, float *ValorTotalVenda){
	*ValorTotalVenda = valorUnitario * quantidade;
	printf("\n-----SISTEMA DE FRENTE DE CAIXA MODULO DE VENDAS-----");
		printf("\nTotal da compra:%.2f", *ValorTotalVenda);
		
}
void telaFinal(float *ValorTotalVenda){
	float valorUnitario, desconto;
		printf("Desconto:");
		scanf("%f",&desconto);
		descontoTotal = *ValorTotalVenda - desconto;
		printf("Valor para pagamento:%.2f", descontoTotal);
		printf("\n-----Variaveis de controle-----");
		printf("\nValor total da compra depois do desconto:%.2f", descontoTotal);		
}
int main(){
	while(1){
	char c;
	float valorUnitario=0, quantidade=0;
	float *ValorTotalVenda;
	printf("-----SISTEMA DE FRENTE DE CAIXA MODULO DE VENDAS-----");
	printf("\nDigite o valor valorUnitario:");
	scanf("%f",&valorUnitario);
	printf("Digite a quantidade:");
	scanf("%f",&quantidade);
	caixaVenda(valorUnitario, quantidade, ValorTotalVenda);
	printf("\ndeseja comprar mais um produto(s/n)=");
	scanf(" %c",&c);
	if(c=='n'){
	telaFinal(ValorTotalVenda);	
	return 0;
	}	
	
}
	
}
