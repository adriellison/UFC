#include <stdio.h>
#include <conio.h>
#include <windows.h>
int a,b,L,L2;
void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main(){
    /*//menu*/
    int opcao;
    do{
        inicio:
        opcao=0;
        L=2;L2=2;b=2;
        system("cls");
        system("color 0f");
        printf("\n\n\tListar\n\tAdicionar\n\tEditar\n\tDeletar\n\tOpcoes\n\tAjuda\n\tSair\n");
        do{
            gotoxy(1,L);
            printf("-->");
            gotoxy(10,6);
            if(kbhit){a=getch();}
            if(a == 80 && b < 8){L2=L;L++;b++;}/*seta p/baixo*/
            if(a == 72 && b > 2){L2=L;L--;b--;}/*seta p/cima */
            if(L!=L2){gotoxy(1,L2);printf("   ");L2=L;}
            if(a == 13){opcao=b-1;}
        }while(opcao == 0);
        switch (opcao){
            case 1:
                system("cls");
                printf("\nContatos\n");
                break;
            case 2:
                system("cls");
                printf("\nAdicionar\n");
                break;
            case 3:
                system("cls");
				printf("\nEditar\n");
                break;
            case 4:
                system("cls");
				printf("\nDeletar\n");
                break;
			case 5:
				system("cls");
				printf("\nOpcoes\n");
				break;
			case 6:
                system("cls");
				printf("\nAjuda\n");
                break;
			case 7:
                system("cls");
				printf("\nFechando\n");
                printf("voce pediu para sair, prencione qualquer tecla para continuar\n");
                break;
            default:
                goto inicio;
        }
    }while(opcao!=7);
    return 0;
}
