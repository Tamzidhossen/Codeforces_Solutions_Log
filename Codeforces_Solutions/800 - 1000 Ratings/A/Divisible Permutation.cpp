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

/**
 * Problem Name: Divisible Permutation
 * Problem Link: https://codeforces.com/contest/2188/problem/A
 * Difficulty: 
 * Topic: Constructive Algorithms
 */

void Solutions(){
    int n;  cin >> n;

    // শুরুতে p = [1, n] দিয়ে শুরু করছি
    vector<int> p;
    p.push_back(1);
    p.push_back(n);

    // কোন সংখ্যাগুলো ব্যবহার করা হয়েছে তা ট্র্যাক করার জন্য st সেট
    set<int> st;
    st.insert(1);
    st.insert(n);

    // পিছন থেকে (n-2 থেকে 1 পর্যন্ত) লুপ চালিয়ে সংখ্যা বসানো
    for (int i = n - 2; i >= 1; i--) {
        int tmp = p.back(); // শেষ সংখ্যাটি নিচ্ছি
        
        // যদি (tmp - i) রেঞ্জের ভেতর থাকে এবং আগে ব্যবহার না হয়ে থাকে
        if (tmp - i >= 1 && tmp - i <= n && st.find(tmp - i) == st.end()) {
            p.push_back(tmp - i);
            st.insert(tmp - i);
        } else {
            // অন্যথায় (tmp + i) যোগ করছি
            p.push_back(tmp + i);
            st.insert(tmp + i);
        }
    }

    // বিন্যাসটি সঠিক ক্রমে আনার জন্য উল্টে দিচ্ছি
    reverse(p.begin(), p.end());

    // ফাইনাল আউটপুট প্রিন্ট করা
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main()
{
    optimize();
    file();
    tc();
    return 0;
}