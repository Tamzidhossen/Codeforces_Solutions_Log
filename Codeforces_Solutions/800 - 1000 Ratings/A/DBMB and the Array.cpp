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

/**
 * Problem Name: DBMB and the Array
 * Problem Link: https://codeforces.com/contest/2193/problem/A
 * Difficulty: 800
 * Topic: Brute Force, Math
 */

void Solutions(){
    int n,s,x; cin >> n >> s >> x;
    vector<int> v(n);

    int cnt = 0;
    FOR(i,n) {
        cin >> v[i];
        cnt += v[i];
    }

    int cal = (s - cnt) % x;
    if(cnt == s){
        cout << "YES\n";
    }else if(cnt < s && cal == 0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}