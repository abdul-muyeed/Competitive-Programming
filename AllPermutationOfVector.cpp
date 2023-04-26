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

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

// Function to find the possible
// permutations
void permutations(vector<vector<int> >& res,
                  vector<int> nums, int l, int h)
{
	// Base case
	// Add the vector to result and return
	if (l == h) {
		res.push_back(nums);
		return;
	}

	// Permutations made
	for (int i = l; i <= h; i++) {

		// Swapping
		swap(nums[l], nums[i]);

		// Calling permutations for
		// next greater value of l
		permutations(res, nums, l + 1, h);

		// Backtracking
		swap(nums[l], nums[i]);
	}
}

// Function to get the permutations
vector<vector<int> > permute(vector<int>& nums)
{
	// Declaring result variable
	vector<vector<int> > res;
	int x = nums.size() - 1;

	// Calling permutations for the first
	// time by passing l
	// as 0 and h = nums.size()-1
	permutations(res, nums, 0, x);
	return res;
}

// Driver Code
int main()
{
	init();
	vector<int> nums = { 1, 2, 3 };
	vector<vector<int> > res = permute(nums);

	// printing result
	for (auto x : res) {
		debugs(x)
	}

	return 0;
}
