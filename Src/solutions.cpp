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
    int n;  cin >> n;
    vector<int> v(n);

    int tmp1 = 0, tmp2 = 0;
    for(auto &u: v){
        cin >> u;
        if(u % 2 == 0) tmp1++;
        else tmp2++;
    }

    if(tmp1>0 && tmp2>0){
        sort(v.begin(), v.end());
    }

    for(auto u: v){
        cout << u << " ";
    }
    cout << "\n";
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}