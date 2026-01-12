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

bool isPossible(vector<int>& v, int k, int mid){
    if(mid == 0) return true;
    int totalPieces = 0;

    for(auto length : v){
        totalPieces += (length / mid);
    }
    
    return totalPieces >= k;
}

int Solutions(){
    int n,k; cin >> n >> k;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    int low = 0, high = 20;
    int ans = 0;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(isPossible(v, k, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Total Pcs Length: " << ans << endl;
    return 0;
}

int main(){
    file();
    Solutions();
}