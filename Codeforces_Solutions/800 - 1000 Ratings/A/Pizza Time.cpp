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

/**
 * Problem Name: Pizza Time
 * Problem Link: https://codeforces.com/contest/2156/problem/A
 * Difficulty: 800
 * Topic: Brute force, Constructive Algorithms, gGreedy
 */

void Solutions(){
    int n;  cin >> n;

    cout << (n-1)/2 << endl;
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}