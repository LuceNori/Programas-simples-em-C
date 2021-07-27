fibonnaci

#include <stdio.h>
int main() {
    int a, b, c, d, f;
    a = 0;
    b = 1;
    printf("Quantos numeros da sequencia de fibonacci  ver: ");
    scanf("%d", &f);
    printf("\nFibonacci: \n%d\n%d\n",a,b);
    /*printf("%d\n",b);*/
    for(d = 0; d <=f-2; d++) {       
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);      
    }
    return 0;
}