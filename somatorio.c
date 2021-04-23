#include<stdio.h>
#include<stdlib.h>

#define SIZE 9

typedef struct dupla
{
	int v1,v2;
}dupla;

int calcular_v1(int *);
int calcular_v2(int *);
dupla calculo(int *);
int *to_int(char *);

int main(void)
{
	char string[SIZE+1];
	printf("Insira os 6 digitos do CPF sem pontos, ex(000111222): ");
	scanf("%s",string);
	
	int *array = to_int(string);
	dupla par = calculo(array);
	
	printf("%d %d\n",par.v1,par.v2);
	free(array);
	
	return EXIT_SUCCESS;
}
int calcular_v1(int *array)
{
	int soma = 0;
	for(int a = 0 ; a < SIZE;a++)
		soma += (11 - (a+1)) * array[a];
		
	int tmp = 11 - (soma%11);
	return tmp > 9 ? 0 : tmp;
}
int calcular_v2(int *array)
{
	int soma1 = 0;
	for(int a = 0; a < SIZE;a++)
		soma1 += (12 - (a+1))*array[a];
	
	int v1 = calcular_v1(array);
	int soma2 = 11 - ((soma1 + (v1*2))%11);
	
	return soma2 > 9 ? 0 : soma2;
}
dupla calculo(int *array)
{
	dupla ret = {calcular_v1(array),calcular_v2(array)};
	return ret;	
}
int *to_int(char *string)
{
	int *ret = (int *)malloc(SIZE * sizeof(int));
	for(int a = 0; a < SIZE;a++)
		ret[a] = string[a] - '0';
	return ret;
}
