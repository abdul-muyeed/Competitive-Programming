#include <bits/stdc++.h>
using namespace std;
long long int N=1e6;


// This a code of Sieve of Eratosthenes


int main()
{
	vector<bool> v(N,1);
	v[0]=v[1]=0;
	for(long long int i=2;i*i<=N;i++ ){
		if(v[i]){
			for(long long int j=i;i*j<=N;j++){
				v[i*j]=0;
			}
		}
	}
	long long int n=100; //Enter last number

	for(long long int i=1;i<=n;i++){
		if(v[i]){
			cout<<i<<endl; // prints prime numbers from 2 to n
		}
	}


	return 0;
}
