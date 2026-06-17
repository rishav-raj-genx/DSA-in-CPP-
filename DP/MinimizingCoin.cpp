#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;

    vector<int>v(n);

    for(auto &a:v)cin>>a;

    vector<int>dp(x+1, 0);

    dp[0] = 0;

    for(int i = 1; i < x; i++){
        for(int j = 0; j < n; j++){
            if(i - v[j] > 0) dp[i] = min(dp[i], dp[i-v[j]] + 1);
        }
    }
    cout<<dp[3];
    return 0;
}