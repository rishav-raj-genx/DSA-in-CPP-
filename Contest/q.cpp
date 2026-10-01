
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        long long sum = 0;

        for (auto &a : v) {
            cin >> a;
            sum += a;
        }

        sort(v.begin(), v.end());

        long long mex = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == mex) mex++;
        }

        long long nmex = (mex * (mex - 1)) / 2;
        for (auto &a : v) {
            if (a > mex) {
                nmex += (mex + 1);
            }
        }

        long long moves = sum - nmex;

        if (moves % 2 != 0) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}
