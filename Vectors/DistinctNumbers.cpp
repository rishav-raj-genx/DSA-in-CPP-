#include <bits/stdc++.h>
using namespace std;

int increase(vector<int> v, int n){

    set<int> s;

    for(int i = 0; i<n; i++){
        s.insert(v[i]);
    }
    
    return s.size();
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i = 0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    cout<<increase(v, n)<<endl;

    return 0;
}