#include <stdio.h>
int main(){
	printf("\t-----------------------------------\n");
	printf("\tBem-Vindo a agenda dos contatinhos!\n");
	printf("\t-----------------------------------\n");

	int repetir = 1, menu;
	while(repetir != 0){
	//menu de selecao
	printf("\n\t<<< MENU >>>\n");
	printf("\t(1) Repetir\n");
	printf("\t(2) Sair\n\t> ");
	scanf("%d", &menu);//scanf("%[1-9]d", &menu); até agora não aceitou expressoes regulares
	//switch(menu)
		switch(menu){
			case 1:
				system("cls");
				printf("\topcao1");
				sleep(1,5);
				system("cls");
				break;
			case 2:
				system("cls");
				printf("\tSair");
				repetir = 0;
				break;
			default:
				system("cls");
				printf("\t%d- opcao invalida!\n", menu);
				sleep(1,2);//pausa de 1 segundo e meio
				system("cls");
				//system("timeout 5");
		}
		//system("cls");
		}
}
