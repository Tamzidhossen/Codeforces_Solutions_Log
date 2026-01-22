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
 * Problem Name: Shifted MEX
 * Problem Link: https://codeforces.com/contest/2185/problem/C
 * Difficulty: Contest
 * Topic: Implementation, Sortings
 */

void Solutions(){
    int n; cin >> n;
    vector<int>v;
    stack <int> st;
    FOR(i,n){
        int x; cin >> x; st.push(x);
    }
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(), v.end());

    int lst_cnt = 1;
    int max_cnt = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]+1){
            lst_cnt++;
        }
        else if(v[i] != v[i-1]){
            lst_cnt = 1;
        }
        max_cnt = max(max_cnt, lst_cnt);
    }
    cout << max_cnt << "\n";
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}