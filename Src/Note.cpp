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

void Sum1(int n){    //This is Head Recursion
    if(n == 1) return;  //First Call Then Work
    Sum1(n-1);
    cout << n << " ";
}   //Output: 2 3 4 5 6 7 8 9 10 11 12 13 14 15

void Sum(int n){    //This is Tail Recursion
    if(n == 1) return;  //First Work Then Call
    cout << n << " ";
    Sum(n-1);
}   //Output: 15 14 13 12 11 10 9 8 7 6 5 4 3 2

int Addition1(int n, int ans){   //This is Tail Recursion With Accumulator
    if(n == 1) return ans;
    ans+=n;
    return Addition1(n-1, ans);
}

int Addition(int n){
    if(n == 1) return 0;
    return Addition(n-1) + n;
}

int Fibonacci(int n){       //Using Recursion
    if(n <= 1) return n;
    return Fibonacci(n-1) + Fibonacci(n-2); 

    /*int n = 8;
    for(int i=0; i<n; i++){
        cout << Fibonacci(i) << " ";
    }*/     //Output: 0 1 1 2 3 5 8 13
}

int Factorial(int n){       //Using Recursion
    if(n == 1) return 1;
    return n * Factorial(n - 1);

    // int n = 5;
    // cout << Factorial(n) << endl;
}

int ArrSum(int arr[], int n){
    if(n == 0) {
        return 0;
    }
    return  arr[n - 1] + ArrSum(arr, n-1);
}

void Solutions(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << ArrSum(arr, n);
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}