#include <bits/stdc++.h>
using namespace std;

void rotatedSorted(vector<int> v, int n, int target)
{
    int l = 0, r = n - 1;

    while (l <= r)
    {

        int mid = l + (r - l) / 2;

        if (v[mid] == target)
        {
            cout << mid << endl;
        }

        if (v[l] <= v[mid])
        {
            if (v[l] <= target && v[mid] > target)
            {

                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        else if (v[r] >= v[mid])
        {
            if (v[r] >= target && v[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
}

int main()
{

    int n, val, target;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    cin >> target;

    rotatedSorted(v, n, target);

    return 0;
}