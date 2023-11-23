#include<bits/stdc++.h>
using namespace std;

vector<int> vertex[10000000];
bool visited[10000000];

void dfs(int node){
    visited[node] = true;
    for(int child : vertex[node]){
        if(!visited[child]){
            cout<<node<<"->"<<child<<endl;
            dfs(child);
        }
    }
}

int main(){
    int t,n;
    cin>>t>>n;
    while(t--){
        int a,b;
        cin>>a>>b;
        vertex[a].push_back(b);
    }
    dfs(n);
    return 0;
}