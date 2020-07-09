#include<stdio.h>
#include<stdlib.h>

#define lli long long int
#define lu size_t

lli is_prime(lli);

int main(void)
{
	lli n;
	printf("Insert a number : ");
	scanf("%lld",&n);
	printf("%lld %s number\n",n,(is_prime(n) ? "is a prime" : "is not a prime"));
	return EXIT_SUCCESS;
}
lli is_prime(lli number)
{
	if(number == 1)
		return 0;
	for(lli i = 2; i*i <= number;i++)
		if(number%i == 0)
			return 0;
	return 1;
}
/*
 * Complexity : O(sqrt(n))
 * */
