#include <bits/stdc++.h>
#define endl '\n';
#define ln cout<<endl;
#define ll long long
#define ull unsigned long long
#define all(V) V.begin(),V.end()
#define pb push_back
#define ff first
#define ss second
#define print(A) cout<< A <<endl;
#define elif else if
#define maxl(A) max_element(all(A))
#define minl(A) min_element(all(A))
using namespace std;
ll power(ll a,ll b)
{
	int ans=1;
	while(b)
	{
		if(b&1)
		{
			ans=ans*a;
		}
		a=a*a; // multiple number
		b>>=1;
	}

	return ans;
}

int main()
{
	print(power(3,4)) // num,power




	return 0;
}
