#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);

    for(auto &a:v) cin>>a;

    vector<int>dp(n+1, 0);
    
    dp[0] = 0;
    dp[1] = abs(v[1]-v[0]);


    for(int i = 2; i <= n; i++){
        dp[i] = min(abs(v[i] - v[i-1]) + dp[i-1], abs(v[i] - v[i-2]) + dp[i-2]);
    }

    cout<< dp[n-1];

    return 0;
}