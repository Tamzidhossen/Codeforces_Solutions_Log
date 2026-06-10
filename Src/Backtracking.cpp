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

int subset(vector<int> &nums, vector<int> &ans, int idx){
    //Base Case
    if(idx == nums.size()){
        cout << "{ ";
        for(auto u: ans){
            cout << u << " ";
        }
        cout << "}" << endl;
        return 0;
    }

    ans.push_back(nums[idx]);
    subset(nums, ans, idx+1);

    //Backtrack
    ans.pop_back();
    subset(nums, ans, idx+1);
}

int permutation(vector<int> &nums, int idx){
    if(idx == nums.size()){
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

void combination_sum(vector<int> &nums, vector<int> &ans, int idx, int target){

    if(target == 0){
        cout << "{ ";
        for(auto u:ans){
            cout << u << " ";
        }
        cout << "}" << endl;
        return;
    }

    if(target<0) return;

    for(int i=idx; i<nums.size(); i++){
        ans.push_back(nums[i]);
        combination_sum(nums, ans, i, target-nums[i]);

        ans.pop_back();
    }
}

int Solutions(){
    vector<int> nums={2,3,6,7};
    vector<int> ans;
    int target = 6;

    combination_sum(nums, ans, 0, target);

    return 0;
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}