#include <bits/stdc++.h>
using namespace std;

int main() {
    long long w, h, n;
    cin >> w >> h >> n;

    auto good = [&](long long side) -> bool {
        long long total = 0;
        
        if(total >= t) return true;
        return false;
    };

    long long l = 0, r = 1;

    while(!good(r)) r *= 2;

    while(r>l){
        long long m = l + (r-l)/2;

        if(good(m)) r = m;

        else l = m;
    }

    cout << r << endl;

    return 0;
}