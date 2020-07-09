#include<stdio.h>
#include<stdlib.h>

int gcd_recursive(int,int);
int gcd_iterative(int,int);

int main(void)
{
	int a,b;
	printf("Insert two numbers: ");
	scanf("%d%d",&a,&b);
	printf("GCD(%d,%d) = %d\n",a,b,gcd_iterative(a,b));
	return EXIT_SUCCESS;
}
int gcd_recursive(int a,int b)
{
	return b == 0 ? a : gcd_recursive(b,a%b); 
}
int gcd_iterative(int a,int b)
{
	while(b)
	{
		int aux = b;
		b = a%b;
		a = aux;
	}
	return a;
}
