//salario e parcela
#include <stdio.h>
#include <math.h>

int main(){
    int salario=0;
    int parcela=0;
   while(1)
    {
    printf("\ndigite seu salario:\n");
    scanf("%d", &salario);
    printf("\ndigite o valor da parcela:\n");
    scanf("%d", &parcela);

        if(parcela>0.3*salario){
            printf("\nEmprestimo negado\n");
        }
        if(parcela<0.3*salario){
            printf("\nemprestimo aprovado\n");
        }

    }
    return 0;
}
    
