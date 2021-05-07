#include<stdio.h>
#include<stdlib.h>

#define long_int long long int
long_int power(long_int ,long_int);

int main(void)
{	
	long_int base,exp;
	printf("Insert a base and exponent : ");
	scanf("%lld %lld",&base,&exp);
	printf("%lld\n",power(base,exp));
	
	return EXIT_SUCCESS;
}
long_int power(long_int base,long_int exp)
{
	long_int ret = 1;
	while(exp)
	{
		if(exp & 1)
			ret *= base;
		base *= base;
		exp >>=1;
	}
	return ret;
}
