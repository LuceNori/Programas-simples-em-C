#include <stdio.h>
int main(){
    int P, R;

        scanf("%d%d", &P,&R);
        
        if (P==0){
            printf("C");
        }
            else if ((P==1) && (R==0)){
                printf("B");
            }
            else if ((P==1) && (R==1)){
                printf("A");
            }
    return 0;
}
