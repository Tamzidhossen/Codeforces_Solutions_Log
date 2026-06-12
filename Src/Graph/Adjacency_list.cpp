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
    int n = 5; //Total nodes 0 to 4

    vector<vector<int>> adj(n);

    adj[0].push_back(1); adj[0].push_back(2);
    adj[1].push_back(0); adj[1].push_back(3);
    adj[3].push_back(1); adj[2].push_back(0);
    adj[2].push_back(4); adj[4].push_back(2);

    //Print Adj List
    for(int i=0; i<n; i++){
        cout << i << " -> ";
        for(int neighbor : adj[i]){
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

/**     //Answer : Adjacency List
 * 0 -> 1 2 
 * 1 -> 0 3 
 * 2 -> 0 4 
 * 3 -> 1 
 * 4 -> 2 
 */

int main()
{
    optimize();
    file();
    tc();
    return 0;
}