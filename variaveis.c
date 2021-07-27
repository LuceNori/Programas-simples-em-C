//variaveis

#include <stdio.h>
#include <stdlib.h>

float salarioMinimo=1100.100;
void aumentaSalario(float premio, float *valorParaPagamaento);

	void aumentaSalario(float premio, float *valorParaPagamaento){
			float valorPremio=0, valorPagamaento=0;
			valorPremio = premio;
			valorPagamaento = salarioMinimo + valorPremio;
			*valorParaPagamaento = valorPagamaento;
				printf("\nO valor da variavel local valorPremio (programa B) =  %.2f\n", valorPremio);
				printf("\nO valor da variavel local valorPagamaento (programa B) =  %.2f\n", valorPagamaento);
				printf("\nO valor da variavel local valorParaPagamaento (programa B) =  %.2f\n", valorParaPagamaento);  
}
		int main (){
			float premio=400, totalPagSalario=0;
			aumentaSalario(premio, &totalPagSalario);
			printf("\nO valor da variavel local premio (programa A) =  %.2f\n", premio);
			printf("\nO valor da variavel local totalPagSalario (programa A) =  %.2f\n", totalPagSalario);  

return 0;
}