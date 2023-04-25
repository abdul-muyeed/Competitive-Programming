#include <bits/stdc++.h>
#define endl '\n';
#define ln cout<<endl;
#define YES print("YES")
#define NO print("NO")
#define ll long long
#define ull unsigned long long
#define all(V) V.begin(),V.end()
#define pb push_back
#define ff first
#define ss second
#define print(A) cout<< A <<endl;
#define elif else if
#define sz(x) ((ll)(x).size())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define count(a,x) count(a.begin(), a.end(),x)
#define sum(a) accumulate(a.begin(), a.end(),0)
#define maxl(A) max_element(all(A))
#define minl(A) min_element(all(A))
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<< " " << x << endl;
#define debugs(x) cerr << #x<< " "; _print(x);
#else
#define debug(x)
#define debugs(x)
#endif
using namespace std;
template<class T>void _print(vector<T>v) {cerr << "[ "; for (T out : v) {cerr << out << " ";} cerr << "]" << endl;}
template<class T, class V>void _print(map<T, V>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
template<class T, class V>void _print(vector<pair<T, V>>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
template<class T, class V>void _print(unordered_map<T, V>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
template<class T>void _print(set<T>v) {cerr << "[ "; for (T out : v) {cerr << out << " ";} cerr << "]" << endl;}
//template<class T>void _print(vector<T>v){cerr<<"[ ";for(T out:v){cerr<<out<<" ";}cerr<<"]"<<endl;}
//const ll N =;
//const ll arr[N];
void init() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
}
//cd "C:\Users\Hp\Desktop\CodeForce\";python .\compare.py

vector<string> v;
void permute(string& a, int l, int r)
{

	if (l == r)
		v.pb(a);
	else {
		for (int i = l; i <= r; i++) {

			swap(a[l], a[i]);

			permute(a, l + 1, r);

			swap(a[l], a[i]);
		}
	}
}
int main()
{
	init();
	string str = "ABC";
	int n = str.size();
	permute(str, 0, n - 1);
	debugs(v);
	return 0;
}