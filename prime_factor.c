#include<stdio.h>
#include<stdlib.h>

void prime_factor_decomposition(size_t );

int main(void)
{
	size_t n;
	
	printf("Insert a number : ");
	scanf("%lu",&n);
	prime_factor_decomposition(n);
			
	return EXIT_SUCCESS;
}
void prime_factor_decomposition(size_t number)
{
	for(size_t a = 2; a*a <= number;a++)
	{
		if(number%a == 0)
		{
			int count = 0;
			while(number%a == 0)
				count++,number /= a;
			printf("%lu ^ %d\n",a,count);
		}
	}
	if(number > 1)
		printf("%lu\n",number);
}
