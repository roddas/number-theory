#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
#define long_int long long int
long_int power(long_int ,long_int);
long_int modulo_inverse(long_int, long_int );
long_int power_modulation(long_int ,long_int , long_int );

int main(void)
{	
	long_int a,b;
	cin >> a >> b;
	cout << modulo_inverse(a,b) << endl;
	
	return EXIT_SUCCESS;
}
long_int modulo_inverse(long_int a, long_int b)
{
	return power_modulation(a,b-2,b);
}
long_int power_modulation(long_int base,long_int exp, long_int m)
{
	long_int ret = 1;
	while(exp)
	{
		if(exp & 1)
			ret = (ret * base) % m, exp--;
		else
			base = (base * base) % m, exp >>=1;
	}
	return ret;
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
