#include <bits/stdc++.h>
using namespace std;

void rota(vector<int> v, int n, int k){

    k = k % n;
    
    if(k==n){
        for(auto s : v)cout<<s<<" ";
        return;
    } 
        reverse(v.begin(), v.begin()+ n - k);
        reverse(v.begin()+ n - k, v.end());
        reverse(v.begin(), v.end());
        for(auto s : v)cout<<s<<" "; 
    cout<<endl;
}

int main(){
    int n, k;
    cin>>n;

    vector<int>v(n);
    for(auto &a : v) cin>>a;

    cin>>k;

    rota(v, n, k);

    return 0;
 }