#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexico(FILE *arq,char *ch2,	char ch,char I );
char url[]="test.txt";
int num = 0;
int i = 0;
char path[]="test.txt";
char literalsTable[10][10] = {"programa", "leia", "escreva ","se", "senao", "para", "inteiro", "caractere","real", "fim"};
//char identificadores = { ""}

int main(void)
{	FILE *arq;
	char *ch2 = malloc(1);
	char ch;
	arq = fopen(url, "r");
	lexico(arq,ch2,ch);
	fclose(arq);
	return 0;


}
int lexico(FILE *arq,char *ch2,	char ch,char I ){
	
	int j =0;
	
	if(arq == NULL)
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	    if( (ch=fgetc(arq))!= EOF ){
	    	if((112=ch)&&(i==0)){
	    		lexico(arq,ch2,ch,I);
			}
			if(ch == '\n')
			  	printf("\t |%i| ", ++num);
			//putchar(ch);
			printf("%c", ch);
			ch2[i++] = ch;
			ch2 = realloc(ch2, i+1);
			lexico(arq,ch2,ch);
		}
		/*while( j<i ){
			printf("%c", ch2[j++]);
		}*/
		
		//printf("Existem %d linhas no arquivo\n", num);
	return 0;
}
