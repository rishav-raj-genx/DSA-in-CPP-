#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &a : v) cin >> a;

    sort(begin(v), end(v));

    int k;
    cin >> k;
    
    while(k--){
        int l, r;
        cin>>l>>r;

        int low = lower_bound(begin(v), end(v), l) - begin(v);
        int up = end(v) - upper_bound(begin(v), end(v), r);

        cout<< n - (up + low) <<" ";

    }

    return 0;
}