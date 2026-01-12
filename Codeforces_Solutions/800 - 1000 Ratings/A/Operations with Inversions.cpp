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
 * Problem Name: Operations with Inversions
 * Problem Link: https://codeforces.com/contest/2176/problem/A
 * Difficulty: 800
 * Topic: Implementation, greedy, Math
 */

int Solutions(){
    int n; cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int cnt = 0;
    int diff = 0;
    
    for(int i=0; i<n; i++){
        if(v[i] >= diff){
            diff = v[i];
        } else {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main(){
    file();
    int t; cin >> t;

    while(t--){
        Solutions();
    }
}