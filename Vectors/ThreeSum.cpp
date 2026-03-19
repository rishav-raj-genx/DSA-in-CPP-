#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &v, int n, int target)
{

    int l = 1;
    int r = n - 1;

    sort(v.begin()+1, v.end());
    for (int i = 0; i < n; i++)
    {
        target = -(target - v[i]);
        while (l <= r)
        {
            int sum = v[l] + v[r];
            if (sum == -target)
            {
                if(v[l]==v[l+1]) l++;
                else if (v[r]==v[r-1]) r--;
                else cout << l + 1 << " " << r + 1 << endl;
            }
            else if (sum > target)
                r--;
            else
                l++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &a : v)
        cin >> a;

    int target;
    cin >> target;
    twoSum(v, n, target);

    return 0;
}