#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexico();
char url[]="test.txt";
char path[]="test.txt";
char literalsTable[10][10] = {"programa", "leia", "escreva ","se", "senao", "para", "inteiro", "caractere","real", "fim"};

int main(void)
{
	
	char ch;
	char *ch2 =  malloc(1);
	FILE *arq;
	int num = 0;
	int i = 0;
	int j =0;
	arq = fopen(url, "r");
	if(arq == NULL)
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	    while( (ch=fgetc(arq))!= EOF ){
			if(ch == '\n')
			  	printf("\t |%i| ", ++num);
			//putchar(ch);
			printf("%c", ch);
			ch2[i++] = ch;
			ch2 = realloc(ch2, i+1);
		}
		while( j<i ){
			printf("%c", ch2[j++]);
		}
		printf("Existem %d linhas no arquivo\n", num);
	
			
	fclose(arq);
	
	return 0;

}
int lexico(){
	char ch;
	int num=0;
	FILE *arq;
	
	arq = fopen(path, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		while( (ch=fgetc(arq))!= EOF )
			if(ch == '\n')
			  num++;
	
	
	fclose(arq);
	
	return 0;
}
