#include<bits/stdc++.h>
using namespace std;

int twoSum(vector<int>&v, int n,int target){
    map<int, int> mp;

    for(int i = 0; i<n; i++){
        int remaining = target - v[i];
        if(mp.find(remaining) != mp.end()){
            return {mp[remaining, i]};
        }
        mp[v[i]] = i;
    }

    return{};
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(auto &a : v) cin>>a;

    int target; cin>>target;

    cout<<twoSum(v, n, target);

    return 0;
}