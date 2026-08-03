#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    vector<int>v(n);
    for(auto &a: v)cin>>a;
    int l = 0, r = 2*t;
    int ans = -1;
    while(l<r){
        int mid = l + (r-l)/2;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += mid/v[i];
        }
        if(sum == t) {
            ans = mid;
        }
        else if(sum<t) l = mid + 1;
        else r = mid - 1;
    }
    cout<<ans<<endl;
    return 0;
}