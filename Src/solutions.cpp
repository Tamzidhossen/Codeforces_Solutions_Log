#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define FOR(i,x) for(ll i=0; i<x; i++)
#define FORN(i,x) for(ll i=1; i<x; i++)

#define tc() ll t; cin >> t; while(t--)
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    #endif
}

void Solutions(){
    int n; cin >> n;

    if(n <= 1){
        cout << "0\n";
    } else {
        cout << (n%2 !=0 ? 0 : n/4 + 1) << "\n";
    }
}

int main()
{
    optimize();
    file();
    tc(){
        Solutions();
    };
    return 0;
}