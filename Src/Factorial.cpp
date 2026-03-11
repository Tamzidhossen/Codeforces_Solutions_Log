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

int fact(int n){
    if(n==0) return 1;
    int res = n * fact(n-1);
    return res;
}

void Solutions1(){

    /* int n; cin >> n;
    cout << fact(n) << endl; */

    int n; cin >> n;
    vector <int> v(n);

    FOR(i, n){ cin >> v[i]; }

    /* vector <int> m;      // Space Complexity Big O(n)
    for(int i=n-1; i>=0; i--){
        m.push_back(v[i]);
    } 

    FOR(i, n){
        cout << m[i] << " ";
    } */

    FOR(i, n/2){
        swap(v[i], v[n-i-1]);
    }
    FOR(i, n){
        cout << v[i] << " ";
        // swap(v[i], v[n-i-1]);
    }
}

void Solutions2(){
    vector <int> v = { 5, 7};

    /*auto it = v.begin();
    it++;
    // *it = *it+5;
    cout << *it << endl;*/

    /*vector <int> vp = { 6, 4, 3};
    v.insert(v.begin()+1, 4, 11);
    v.erase(v.begin()+1, v.begin()+3);
    v.swap(vp);
    v.shrink_to_fit();*/
    // cout << v.size() << endl;
    // for(auto it = v.begin(); it!=v.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    vector <int> k;
    for(int i=0; i<10; i++){
        k.push_back(i);
        cout << k.size() << " " << k.capacity() << endl;
    }
    cout << endl;
}

struct Student
{
    string name;
    int marks;
    int age;
    string section;
};

void Solutions3(){
    /*vector <pair <string, int>> vp;

    vp.push_back({"Rohim", 45});
    vp.push_back({"Korim", 39});
    vp.push_back({"Rohim", 80});

    for(auto& u: vp){
        cout << u.first << " " << u.second << endl;
    }*/

    vector <Student> s = {
        { "Rahim", 94, 23, "B"},
        { "Korim", 34, 22, "A"},
        { "Mofiz", 81, 13, "F"},
        { "Johir", 94, 27, "A"},
    };

    // s.clear();

    if(!s.empty()){
        cout << "Vector Not Empty" << endl;
    }

    for(auto& u: s){
        cout << u.name << " " << u.age << " " << u.marks << " " << u.section << endl;
    }
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