
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        if(n > 2 * (2 * k + 1)){
            cout << -1 << endl;
            continue;
        } 
        
        vector<long long> v(n);
        for(auto &a: v) cin >> a;
        
        long long miny = INT_MAX;
        
        for(long long l = 0; l <= k && l < n; l++){
            
            for(long long r = max(l + 1, n - 1 - k); r < n; r++){
                
                if(r - l <= 2 * k + 1){
                    miny = min(miny, v[l] + v[r]);
                }
            }
        }
        
        if(miny == INT_MAX) cout << -1 << endl;
        else cout << miny << endl;
    }
    return 0;
}
