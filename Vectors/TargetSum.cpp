#include <bits/stdc++.h>
using namespace std;

void targetSum(int n, vector<int> &v, int target) {
    sort(v.begin(), v.end());  
    int l = 0, r = n - 1;

    while (l < r) {
        int sum = v[l] + v[r];
        if (sum == target) {
            cout << v[l] << " and " << v[r] << endl;
            l++;
            r--;
        } else if (sum < target) {
            l++;
        } else {
            r--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 1000) {
        return 1;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int target;
    cin >> target;

    targetSum(n, v, target);

    return 0;
}
