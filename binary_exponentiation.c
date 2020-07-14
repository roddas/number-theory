#include<stdio.h>
#include<stdlib.h>

#define lli long long int
lli power(lli ,lli);

int main(void)
{	
	lli base,exp;
	printf("Insert a base and exponent : ");
	scanf("%lld%lld",&base,&exp);
	printf("%lld\n",power(base,exp));
	return EXIT_SUCCESS;
}
lli power(lli base,lli exp)
{
	lli ret = 1;
	while(exp)
	{
		if(exp & 1) // The same as exp % 2
			ret *= base;
		base *= base;
		exp >>=1; // The same as exp = exp/2
	}
	return ret;
}
/*
 * Note : Logical operator runs faster than others operators
 * */
