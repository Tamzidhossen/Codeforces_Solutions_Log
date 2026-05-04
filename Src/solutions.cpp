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

void Solutions1(){
    // int x, y;  //Big O(1)
    // cin >> x >> y;  //Big O(1)

    /*set <int> st;
    for(int i=0; i< x; i++){
        int v; cin >> v;
        st.insert(v);
    }
    cout << st.size();*/

    /*pair <string, int> info1, info2;
    cin >> info1.first >> info1.second;
    cin >> info2.first >> info2.second;

    if(info2.first < info1.first){
        swap(info1, info2);
    }

    cout << info1.first << " " << info1.second;*/

    int n; cin >> n;
    /* int target; cin >> target;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    } */

    /*for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            // cout << arr[i] << ", " << arr[j] << endl;
            if(arr[i] + arr[j] == target){
                cout << i << ", " << j << endl;
                return;
            }
        }
    }*/   //Complexity Big O(n^2)

    int cnt = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout << i << " ";
            if(i != n/i){
                cout << n/i << " ";
            }
        }
        cout << endl;
    }
    cout << endl;    //Complexity  Big O(Root/n)
}

void Solutions(){
    int x, y; cin >> x >> y;

    cout << ((x%2 == 1 && y%2 == 1) ? "no":"yes") ; 
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}