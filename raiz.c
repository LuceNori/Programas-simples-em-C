//raiz 
#include <stdio.h>
#include <math.h>


int main(){double n=0;
while(1){
    printf("\nDigite um n inteiro:");
    scanf("%lf", &n);
    
    if(n>=0) {
        printf("%lf", sqrt(n));
    }
}
return 0;
}
