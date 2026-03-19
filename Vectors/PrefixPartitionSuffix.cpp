#include<bits/stdc++.h>
using namespace std;

// bool partition(const vector<int>& v) {


// if (v.size() < 2) return false; 


// int l = 1, r = v.size() - 2;
// int prefix = v[0];
// int suffix = v[v.size() - 1];


// while (l <= r) {
// if (prefix == suffix) return true;
// else if (prefix < suffix) prefix += v[l++];
// else suffix += v[r--];
// }
// return false;
// }

bool partition(vector<int> &v){
    int t = 0;
    int p = 0;

    for(auto &a : v) t += a;

    for(int i = 0; i < v.size(); i++){
        p += v[i];
        if(p == t - p) return true;
    }
    return false;
}

int main(){
    int n ; cin>>n;

    vector<int> v(n);
    for(auto &a:v) cin>>a;

    cout<<partition(v)<<endl;

    return 0;
}