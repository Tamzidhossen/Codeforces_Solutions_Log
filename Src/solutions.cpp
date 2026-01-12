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

void Solutions(){
    // int n; cin >> n;
    // if(n==2 || n==3){
    //     cout << n << endl;
    // } else if(n%2==0){
    //     cout << 0 << endl;
    // } else {
    //     cout << 1 << endl;
    // }

    int s,k,m; cin >> s >> k >> m;

    int c_top = s;
    int c_bottom = 0;

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

int solve(){
    int a; cin >> a;
    int arr[a];
    for(int t=0; t<a; t++){
        cin>>arr[t];
    }

    for(int i=0; i<a; i++){
        bool isValid = false;

        for(int j=0; j<i; j++){

            if(arr[i] == arr[j]){
                isValid = true; 
                break; 
            }
        }
        if(!isValid) { 
            cout << arr[i] << " "; 
        }
    }
}

int data(){     /** For Practice Multiple Loop */
    for(int i=0; i<5; i++){
        cout << i << " ";
        for(int j=0; j<i; j++){
            cout << j << "* ";
        }
        cout << endl;
    }
}
int main()
{
    //[1,2,2,4,1,3,2]
    file();
    // solve();
    int t; cin >> t;

    while(t--){
        Solutions();
    }
    return 0;
}