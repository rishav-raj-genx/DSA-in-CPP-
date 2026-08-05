#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    long long t;
    cin >> n >> t;

    vector<long long> v(n);

    for(auto &a: v) cin >> a;

    auto good = [&](long long time) -> bool {
        long long total = 0;
        for(long long i = 0; i < n; i++) {
            total += time / v[i];
        }
        if(total >= t) return true;
        return false;
    };

    long long l = 0, r = 1;

    while(!good(r)) r *= 2;

    while(r>l+1){
        long long m = l + (r-l)/2;
        if(good(m)) r = m;
        else l = m;
    }

    cout << r << endl;
    return 0;
}