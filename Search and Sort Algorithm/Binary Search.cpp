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


int main()
{	
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < 10; ++i)
	{
		cin>>arr[i];
	}
	
	int low=0,high=n-1, mid,ans=10;

	while(high-low>1)
	{
		mid=low+(high-low)/2;

		if(arr[mid]<ans)
		{
			low=mid+1;
		}else
		{
			high=mid;
		}

	}
	if(arr[high]==ans)
	{
		cout<<"Index: "<<high+1<<endl;
	}elif(arr[low]==ans)
	{
		cout<<"Index: "<<low+1<<endl;
	}else{
		cout<<"Number "<<ans<<" Not found."<<endl;
	}
	return 0;
			
		
}