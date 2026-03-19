
#include <bits/stdc++.h>
using namespace std;

int minrotated(int n, vector<int>v){

    int ans = INT32_MAX, index;
    int l = 0, r = n-1;
    
    while(l<=r){
        int mid = l + (r-l)/2;

        if(v[l]<=v[mid])
        {
            if(v[l] < ans){
                ans = v[l];
                index = l;
            }
            l = mid + 1;
        } else 
        {
            if(v[mid]<ans){
                ans = v[mid];
                index = mid;
            }
            r = mid - 1;
        }
    }
    return index;
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