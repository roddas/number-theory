#include<stdio.h>
#include<stdlib.h>

int gcd(int,int);
int lcm(int,int);

int main(void)
{
	int a,b;
	printf("Insert two numbers: ");
	scanf("%d%d",&a,&b);
	printf("LCM(%d,%d) = %d\n",a,b,lcm(a,b));
	return EXIT_SUCCESS;
}
int gcd(int a,int b)
{
	return b == 0 ? a : gcd(b,a%b); 
}
int lcm(int a,int b)
{
	return abs(a*b)/gcd(a,b);
}
