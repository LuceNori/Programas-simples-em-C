#include <stdio.h>
int main(){
	int a=0, b=0, c=0,i=0;
	do{
		scanf("%d",&c);
		if(i==0){
			a=c;
			b=c;
			i++;
		}else if(c==0){
			break;
		}if(c>a){
			a=c;
		}else if(c<b){
			b=c;
		}
	}while(1);
	printf("%d",a);
}