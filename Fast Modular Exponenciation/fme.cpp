#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
#define long_int long long int
long_int power_modulation(long_int ,long_int, long_int);

int main(void)
{	
	long_int a,b,m;
	cin >> a >> b >> m;
	cout << power_modulation(a,b,m) << endl;
	
	return EXIT_SUCCESS;
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
