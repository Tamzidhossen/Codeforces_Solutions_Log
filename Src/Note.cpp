#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define FOR(i,x) for(ll i=0; i<x; i++)
#define FORN(i,x) for(ll i=1; i<=x; i++)

#define tc() ll t; cin >> t; while(t--) Solutions()
// #define tc() ll t; cin >> t; while(t--) next_permutation()
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    #endif
}

void Solutions1(){

    int n, target; cin >> n >> target;
    vector <int> v(n);

    FOR(i, n) cin >> v[i];

    /*FOR(i, n) {             // Time Complexity O(n^2)
        FOR(j, n) {         // Auxilary Space Complexity O(1)
            if(i != j) {
                if(v[i] + v[j] == target){
                    cout << "yes" << endl;
                    return;
                }
            }
        }
    }
    cout << "no" << endl; */

    /**Trade of Solutions */
    unordered_map <int, bool> vis;     // Auxilary Space Complexity O(n)
    FOR(i, n) {                        // Time Complexity O(n)
        if(vis[target - v[i]]) {
            cout << "yes" << endl;
            return;
        }
        vis[v[i]] = true;
    }

    cout << "no" << endl;

}

int next_permutation(){
    int n; cin >> n;
    vector <int> v(n);

    FOR(i, n) cin >> v[i];

    sort(v.begin(), v.end());

    do {
        for(int x: v) cout << x << " ";     //Space O(1)
        cout << endl;
    } while(next_permutation(v.begin(), v.end()));  //Time Complexity O(n!)
}

void Solutions2(){
    int arr[] = { 3, 2, 5, 2, 2, 1, 3, 4};

    // for(int i=0; i<8; i++){
    //     bool isDuplicate = false;
    //     for(int j=0; j<i; j++){
    //         if(arr[i] == arr[j]){
    //             isDuplicate = true;
    //             break;
    //         }
    //     }
    //     if(!isDuplicate){
    //         cout << arr[i] << " ";
    //     }
    // }
    // cout << endl;

    for(int i=0; i<8; i++){
        bool isDuplicate = false;
        for(int j=0; j<8; j++){
            if(arr[i] == arr[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            cout << arr[i] << " ";
        }
    }
}

int Sum(int n){
    if(n == 1) return 1;
    cout << n << " ";
    return Sum(n-1);
}

void Solutions(){
    int res = Sum(15);
    cout << res << endl;
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}