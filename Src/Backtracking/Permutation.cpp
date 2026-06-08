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

int permutation(vector<int> &nums, int idx){
    if(idx == nums.size()){ //Base Case
        cout << "{ ";
        for(auto u: nums){ cout << u << " ";}
        cout << "}" << endl;
    }

    for(int i=idx; i<nums.size(); i++){
        swap(nums[idx], nums[i]);

        permutation(nums, idx + 1);
        swap(nums[idx], nums[i]);
    }
}
void Solutions(){
    vector<int> nums={1,2,3};

    permutation(nums, 0);
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}