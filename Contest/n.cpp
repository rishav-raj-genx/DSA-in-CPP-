

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m, k;
        cin >> m >> k;
        vector<int> v(m);
        for (auto &a : v) cin >> a;
        
        sort(v.begin(), v.end());
        
        vector<int> seat(k);
        int vi = 0;
        int si = 0;
        
        for (int i = 1; i <= n; i++) {
            if (vi < m && v[vi] == i) {
                vi++;
            } else {
                seat[si] = i;
                si++;
                if (si == k) break;
            }
        }
        
        for (auto &a : seat)cout<<a<<" ";
        cout << endl;
    }
    return 0;
}
