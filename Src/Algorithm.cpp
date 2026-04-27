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

void swap(int &a, int &b){  //& This is Reference
    int tmp = a;
    a = b;
    b = tmp;

    // int a = 5, b = 9;
    // swap(a, b);
    // cout << a << " " << b << endl;
}

void BubbleSort(int arr[], int n) {
    bool check = false;
    for(int i=0; i < n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                check = true;
            }
        }
        if(!check){ cout << "off" << endl; break; }
    }


    // Solution Part
    /*
    int arr[] = { 54, 23, 34, 53, 32 };
    // int arr[] = { 1, 2, 3, 4, 5 };
    int n = 5;
    cout << "Befor: ";
    for(int i=0; i<n; i++){ cout << arr[i] << " "; }
    cout << endl;

    BubbleSort(arr, n);
    cout << "After: ";
    for(int j=0; j<n; j++){ cout << arr[j] << " "; }
    cout << endl;
    */

}

void Solutions(){
    
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}