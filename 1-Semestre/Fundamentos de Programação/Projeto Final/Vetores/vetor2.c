#include <stdio.h>
int main(){
	char contato[2][50];
	//contato = "adri";
	//scanf("%s", &contato);
	//contato[0] = "Adri";
	//contato[1] = "85991292558";
	//contato[2] = "adriellisonki@gmail.com";
	scanf("%s", &contato[0]);
	scanf("%s", &contato[1]);
	scanf("%s", &contato[2]);
	printf("%s - %s - %s", contato[0], contato[1], contato[2]);
	//printf("%s", contato);
}
