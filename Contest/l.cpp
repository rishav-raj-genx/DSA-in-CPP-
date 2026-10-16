#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, r;
        cin >> x >> y >> r;

        bool flag = false;

        for (long long i = -50; i <= 50; i++) {
            for (long long j = -50; j <= 50; j++) {
                if ((x - i) * (x - i) + (y - j) * (y - j) == r * r) {
                    cout << i << " " << j << endl;
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
    }
    return 0;
}
