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

vector<int> graph[7];

void bfs(int start){
    
    // bool visited[7] = { false };
    vector <bool> visited(7, false);
    queue <int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS: ";
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int neighbor : graph[node]) {
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

void Solutions(){
    graph[1] = {2, 3};
    graph[2] = {1, 4, 5};
    graph[3] = {1, 6};
    graph[4] = {2};
    graph[5] = {2};
    graph[6] = {3};

    bfs(1);
    // return 0;
}

/**     //Answer : Breadth First Search [BFS]
 * BFS: 1 2 3 4 5 6 
 */

int main()
{
    optimize();
    file();
    tc();
    return 0;
}