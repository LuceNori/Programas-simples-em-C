//Login
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char escolha[100];
	char usuario[100];
	char senha[100];
	char email[100];
	char usuario_login[100];
	char senha_login[100];
	char email_login[100]; 
	int criou_conta=0;
    
	
	while(1){
	printf("\nEscolha 1:Fazer login\nEscolha 2:Criar conta\nEscolha 3:Sair\n");
	printf("Escolha entre 1, 2 ou 3:\n");	
	scanf("%s", escolha);
		if(escolha[0]=='2'){
			printf("Crie um nome de usuario:\n");
			scanf("%s", &usuario);
			printf("Crie uma senha:\n");
			scanf("%s", &senha);
			printf("informe seu email:\n");
			scanf("%s", &email);
			criou_conta=1;
			printf("conta criada com sucesso\n");
			printf("%s %s %s", usuario, senha, email);
			continue;
		}
		if(escolha[0]=='3'){
			printf("saindo.");
			exit(0);
		}
		if(escolha[0]=='1'){
			if(criou_conta==1){
				printf("Usuario:\n");
				scanf("%s", &usuario_login);			
				printf("Senha:\n");
				scanf("%s", &senha_login);				
				printf("informe seu email:\n");
				scanf("%s", &email_login);
				if(strcmp(usuario,usuario_login)==0&&strcmp(senha,senha_login)==0&&strcmp(email,email_login)==0){
					printf("Acesso liberado\n");
				
                exit(0);
               		}else{
               			printf("Acesso negado");
               		}continue;

		        	}else{
				printf("conta ainda nao criada\n\n");
			}
			continue;
		}
return 0;
}
}
