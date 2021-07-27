//crescente
#include <stdio.h>
int main() 
{
    int n1;
    int n2;
    while(1){
        printf("Digite um numero inteiro:");   
        scanf("%d", &n1); 
        printf("Digite um numero inteiro:");
        scanf("%d", &n2); 
         
        
        if (n1>n2){
            printf("%d %d\n\n",n2, n1);
        }else{
        if(n2>n1) {  
            printf("%d %d\n\n",n1, n2);
        }
    }
}
return 0;
}