#include<stdio.h>
#include<stdlib.h>

size_t *sieve(size_t );

int main(void)
{
	size_t n;
	
	printf("Insert a limit number : ");
	scanf("%lu",&n);
	
	size_t *vector = sieve(n);
	
	for(size_t a = 0; a <=n;a++)
		if(vector[a])
			printf("%lu ",a);
			
	return EXIT_SUCCESS;
}
size_t *sieve(size_t number)
{
	size_t *prime_vector = (size_t *)malloc((number+1)*sizeof(size_t));
	
	for(size_t a = 1; a <= number;a++)
		prime_vector[a] = 1;
	prime_vector[0] = prime_vector[1] = 0;
	
	for(size_t a = 2; a*a <= number;a++)
		if(prime_vector[a])
			for( size_t b = a*a;b <= number;b += a)
				prime_vector[b] = 0;
	return prime_vector;
}
/*
 * Prime number generator using the technique of sieve os Erastothenes, from 2 to n. Complexity: O(N * log(log(N)))
 * */
