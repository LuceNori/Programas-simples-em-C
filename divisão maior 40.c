//divisão maior 40
#include <stdio.h>
#include <math.h>
int main(){
    float n=0;
    while(1){
        printf("\nDigite um n inteiro:\n");
        scanf("%f", &n);    
        if(n>=40) {
            printf("%.2f",n/2);
        }else{
            printf("Coloque um numero maior que 40");
        }

}
return 0;
}