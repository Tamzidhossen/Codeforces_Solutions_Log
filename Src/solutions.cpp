#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define FOR(i,x) for(ll i=0; i<x; i++)
#define FORN(i,x) for(ll i=1; i<x; i++)

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
    int n, m; cin >> n >> m;

    int tmp = 0, ans = 1, x;
    FOR(i, m) {
        cin >> x;
        if(x == 1 && i != 0){
            tmp = 1;
        }
    }
    if(tmp == 0){
        cout << n - x + 1 << "\n";
    }else {
        cout << ans << "\n";
    }
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}