#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
  int n;
  cin >> n;

  string a, b;
  cin >> a >> b;

  vector<int> ea, oa, eb, ob;

  for (int i = 0; i < n; i++) {
    if (a[i] == '1') {
      if (i % 2 == 0)
        ea.push_back(i);
      else
        oa.push_back(i);
    }

    if (b[i] == '1') {
      if (i % 2 == 0)
        eb.push_back(i);
      else
        ob.push_back(i);
    }
  }

  if (ea.size() != eb.size() || oa.size() != ob.size()) {
    cout << -1 << '\n';
    return;
  }

  int ans = 0;

  for (int i = 0; i < ea.size(); ++i)
    ans += abs(ea[i] - eb[i]) / 2;

  for (int i = 0; i < oa.size(); ++i)
    ans += abs(oa[i] - ob[i]) / 2;

  cout << ans << '\n';
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}