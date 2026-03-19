#include<bits/stdc++.h>
using namespace std;

int query(vector<int> &v, int n, int l, int r){

        int sum = 0;

        while(l <= r){
            sum += v[l];
            l++;
        }

    return sum;
}

int main(){
    int n, l , r ; cin>>n;

    vector<int> v(n);
    for(auto &a:v) cin>>a;

    int q; cin>>q;
    while(q--){
    cin>>l>>r;
    
    l--;
    r--;

    cout<<query(v,n,l,r)<<endl;
    }

    return 0;
}