//Lista das vogais
#include <stdio.h>
#include <stdlib.h>

int main(){
int a,qtd;
char c;
printf("escolha um numero de 0 a 25:");
scanf("%d",&a);
c=a+'a';
printf("Escolha um numero acima do que voce escolheu antes:");
scanf("%d",&qtd);
for(int i=a;i<qtd;i++){
	printf("%c\n",i+'a');
}
return 0;
}