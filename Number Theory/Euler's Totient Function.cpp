#include <bits/stdc++.h>
using namespace std;

// this is code of Euler's Totient Function (EFT)


int nprime(int a)
{
	float num=a;

	for (int i = 2; i <= a; ++i)
	{
		if(a%i==0)
		{
			while(a%i==0)  // divideds the non prime
				a/=i;

			num *= (1.0-(1.0/(float)i));
		}
	}
	if(a>1) // last prime
	{
		num *= (1.0-(1.0/(float)a));
	}
	return (int)num; // returns the number of relative  primes
}


int main()
{
	int n=10;
	for (int i = 1; i < n; ++i)
	{
		cout << i <<" --> "<< nprime(i)<<endl;
	}


	return 0;
}
