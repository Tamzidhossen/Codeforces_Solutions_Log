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
 * Problem Name: Your Name
 * Problem Link: https://codeforces.com/problemset/problem/2167/B
 * Difficulty: 800
 * Topic: Strings, Sorting
 */

void Solutions(){
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    cout << (s1 == s2 ? "YES\n" : "NO\n");
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}