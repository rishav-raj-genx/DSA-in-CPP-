#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int r = 1;
  for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1])
      r++;
  }

  int d = 0;

  for (int i = 1; i < n - 1; i++) {
    if (s[i - 1] != s[i] && s[i] != s[i + 1]) {

      if (s[i - 1] == s[i + 1])
        d = 2;
      else
        d = max(d, 1ll);
    }
  }

  cout << r - d << '\n';
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}