#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lexico(FILE *arq);
//char *ch2 = malloc(4);
char url[]="test.txt";
char *c;
int num = 0;
int i = 0;
int il = 0;
int lineCount =0;
int lineSizeCount;
char path[]="test.txt";
char literalsTable[10][10] = {"programa", "leia", "escreva ","se", "senao", "para", "inteiro", "caractere","real", "fim"};
//char identificadores = { ""}

int main(void)
{	FILE *arq;
	char *ch2 ;//= malloc(1);
	char ch;
	arq = fopen(url, "r");
	lexico(arq);
	fclose(arq);
	int j;
//	for(j=0;j<i;j++){
//		printf("%c",c[j]);
//	}
	return 0;

}
void lexico(FILE *arq){
	char *ch2 =malloc(1);
	int v;
	int j =0;
	char ch;
	if(arq == NULL)
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	    do{
	    	if(i==0){
	    		printf("|");
	    		ch=fgetc(arq);
	    	}
			if(ch == '\n')
				printf("| \t linha: |%d|",(il++)+1);
			if(ch == '\n')
				printf("%c|", ch);
			else{
				printf("%c", ch);
			}
			ch2[i++] = ch;
			ch2 = realloc(ch2, i+1);
		}while((ch=fgetc(arq))!= EOF );
		if(ch==EOF){
			printf("|\t linha: |%d|", il);
		}
		//for(j=0;j<i;j++){
		//	printf("%c", ch2[j]);
		//}
	
		c= ch2;
		
		//printf("Existem %d linhas no arquivo\n", num);
	//return ch2;
}
