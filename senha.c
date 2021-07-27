//senha
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int senha=123,numero,i;    
    for(int i=0; i<3; i++){
    printf("Digite sua senha:\n");
    scanf("%d", &senha);
    if(senha==293) {
        printf("Acesso Liberado\n");
        exit(0);
        }
    if(senha!=293){
        printf("Senha incorreta, tente novamente\n");
        }
    }
      return 0;
}
  
