#include <bits/stdc++.h>
using namespace std;

int minrotated(int n, vector<int>v){

    int ans = INT32_MAX;
    int l = 0, r = n-1;
    
    while(l<=r){
        int mid = l + (r-l)/2;

        if(v[l]<=v[mid])
        {
            ans = min(v[l], ans);
            l = mid + 1;
        } else 
        {
            ans = min(v[mid], ans);
            r = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i = 0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    cout<<minrotated(n, v)<<endl;

    return 0;
}