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
 * Problem Name: Hourglass
 * Problem Link: https://codeforces.com/contest/2184/problem/B
 * Difficulty: Contest
 * Topic: Math
 */

void Solutions(){
    int s,k,m; cin >> s >> k >> m;
    int flips = m / k;
    
    if (k >= s) {
        int remaining_time = m % k;
        if (flips % 2 == 0) {
            cout << (s - remaining_time < 0 ? 0 : s - remaining_time) << endl;
        } else {
            cout << (s - remaining_time < 0 ? 0 : s - remaining_time) << endl;
        }
    } else {
        int remaining_time = m % k;
        if (flips % 2 == 0) {
            cout << s - remaining_time << endl;
        } else {
            cout << k - remaining_time << endl;
        }
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