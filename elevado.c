//elevado
#include <stdio.h>
#include <math.h>

int main(){
    double n=0;
    while(1){
        printf("\nDigite um n inteiro:\n");
        scanf("%lf", &n);
        
        if(n>=0) {
        printf("%lf %lf", n/2, pow(n,2));
        }
    }
return 0;
}