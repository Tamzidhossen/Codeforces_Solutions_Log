#include <bits/stdc++.h>
using namespace std;
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    #endif
}

/**
 * Problem Name: Social Experiment
 * Problem Link: https://codeforces.com/contest/2184/problem/A
 * Difficulty: Contest
 * Topic: Math
 */

void Solutions(){
    int n; cin >> n;
    if(n==2 || n==3){
        cout << n << endl;
    } else if(n%2==0){
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
}

int main()
{
    file();
    int t; cin >> t;

    while(t--){
        Solutions();
    }
    return 0;
}