
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin >> n;

        vector<int>v(n);
        for(auto &a: v) cin>>a;
        
        map<int, int> mp;
        int maxy = 0;
        
        for (int i = 0; i < n; i++) {
            int diff = v[i] - i;
            mp[diff]++;
            maxy = max(maxy, mp[diff]);
        }
        
        cout<<n-maxy<<endl;;
    }

    return 0;
}
