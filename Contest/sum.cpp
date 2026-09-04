#include <iostream>
using namespace std;

// Returns sum(sigma(i)) for i from 1 to n, where sigma(i) is the sum of i's divisors.
long long solve(long long n) {
    long long total = 0;

    // d is a divisor of floor(n / d) numbers in [1, n].
    for (long long d = 1; d <= n; ++d) {
        total += d * (n / d);
    }

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << '\n';
    }
}
