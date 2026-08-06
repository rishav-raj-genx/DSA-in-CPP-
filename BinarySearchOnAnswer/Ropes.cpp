#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<double> v(n);
    double r = 0;
    for(auto &a: v){
        cin >> a;
        r = max(a, r);
    } 

    auto good = [&](double length) -> bool {

        long long total = 0;
        
        for(long long i = 0; i < n; i++) {
            total += (long long)(v[i] / length);
        }

        if(total>= k) return true;
        return false;
    };

    double l = 0;

for (int i = 0; i < 100; i++) {
    double m = l + (r - l) / 2;
    if (good(m)) l = m;
    else r = m;
}  

    cout << l << endl;
 
    return 0;
}