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
    int n = 5;  //Total nodes
    vector<vector<int>> mat(n, vector<int>(n, 0));

    mat[0][1] = mat[1][0] = 1;
    mat[1][3] = mat[3][1] = 1;
    mat[0][2] = mat[2][0] = 1;
    mat[2][4] = mat[4][2] = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

/**     //Answer : Adjacency Matrix
 * 0 1 1 0 0 
 * 1 0 0 1 0 
 * 1 0 0 0 1 
 * 0 1 0 0 0 
 * 0 0 1 0 0 
 */

int main()
{
    optimize();
    file();
    tc();
    return 0;
}