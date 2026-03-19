#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> v, int n, int target)
{

    vector<pair<int, int>> vnew;

    for (int i = 0; i < n; i++)
    {
        vnew.push_back({v[i], i});
    }

    sort(vnew.begin(), vnew.end());
    int i = 0, j = n - 1;

    while (i < j)
    {
        if (vnew[i].first + vnew[j].first == target)
        {

            return {vnew[i].second, vnew[j].second};
        }
        else if (vnew[i].first + vnew[j].first > target)
        {
            j--;
        }
        else if (vnew[i].first + vnew[j].first < target)
        {
            i++;
        }
    }
    return {};
}

int main()
{
    int n, val;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    int target;
    cin >> target;

    vector<int> ans = twoSum(v, n, target);
    if (!ans.empty())
    {
        cout << ans[0] << " " << ans[1]<<endl;
    }
    else
    {
        cout << -1;
    }

    return 0;
}