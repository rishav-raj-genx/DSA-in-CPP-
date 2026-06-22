#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n;
    m=3;
    
    vector<vector<int>> mat(n, vector<int>(m));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    vector<vector<int>> dp(n, vector<int>(m,0));
    dp[0][0]=mat[0][0];
    dp[0][1]=mat[0][1];
    dp[0][2]=mat[0][2];
for(int i = 1; i < n; i++) {
    for(int j = 0; j < 3; j++) {
        for(int k = 0; k < 3; k++) {
            if(j != k) {
                dp[i][j] = max(dp[i][j],
                               mat[i][j] + dp[i-1][k]);
            }
        }
    }
}
    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}