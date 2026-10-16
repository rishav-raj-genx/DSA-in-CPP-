#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(auto& a : v) cin >> a;
        
        if (n == 2) {
            cout << v[0] + v[1] << endl;
        } else {
            std::sort(v.begin(), v.end());
            
            int sum = INT_MAX;
            for(int i = 1; i < n - 1; i++) {
                sum = min(sum, v[0] + v[i]);
            }
            
            int maxy = max(sum, v[n - 1]);
            cout << maxy << endl;
        }
    }
    return 0;
}

