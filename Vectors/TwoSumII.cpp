#include<bits/stdc++.h>
using namespace std;

int twoSum(vector<int>&v, int n,int target){

    int l = 0;
    int r = n-1;

    while(l<r){
        int sum = v[l]+v[r];
        if(sum==target){
            cout<<l+1<<" "<<r+1<<endl;
            // return {l, r};/
            break;
        }
        else if(sum>target) r--;
        else l++;
    }
    // return {l, r};
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(auto &a : v) cin>>a;

    int target; cin>>target;
twoSum(v, n, target);

    return 0;
}