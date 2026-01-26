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
 * Problem Name: Ashmal
 * Problem Link: https://codeforces.com/problemset/problem/2180/B
 * Difficulty: 800
 * Topic: Greedy, Strings
 */

void Solutions(){
    int n; cin >> n;
    vector<string> words(n);
    string s = "";

    FOR(i,n) {
        cin >> words[i];
    }

    FOR(i,n){
        string font_add = s + words[i];
        string back_add = words[i] + s;
        if(font_add < back_add){
            s = font_add;
        }else{
            s = back_add;
        }
    }
    cout << s << "\n";
    
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}