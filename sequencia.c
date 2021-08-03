#include <stdio.h>
int main(){
int qtd,linha;
	scanf("%d",&linha);
	scanf("%d",&qtd);
	for(int a=1;a<=qtd;a++){
		if(a%linha==0){
			printf("%d\n",a);
		}else{
			printf("%d ",a);
		}
	}
return 0;
}