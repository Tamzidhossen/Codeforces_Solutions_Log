#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define FOR(i,x) for(ll i=0; i<x; i++)
#define FORN(i,x) for(ll i=1; i<=x; i++)

#define tc() ll t; cin >> t; while(t--) Solutions()
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    #endif
}

void Solutions(){
    //Adjacency List

    int n; // n = number of Nodes
    int e; // e = number of edges
    vector<int> graph[n + 1];

    for(int i=0; i<e; i++){
        int u, v; // two nodes sharing an edge
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(i);
    }
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}