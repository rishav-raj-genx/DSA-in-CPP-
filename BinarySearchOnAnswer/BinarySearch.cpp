#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>& v, int l, int r, int t){

    if(l>r) return -1;

    int mid = l + (r-l)/2;
    
    if(v[mid]==t) return mid;
    else if (v[mid]<t) l = mid + 1;
    else r = mid - 1;

    return binary(v, l, r, t);
}

int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(auto &a: v) cin>>a;

    int t;
    cin>>t;

    cout<<binary(v, 0, n-1, t)<<endl;

    return 0;
}