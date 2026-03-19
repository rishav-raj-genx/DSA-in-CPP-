#include <bits/stdc++.h>
using namespace std;

void maxMin(vector<int> v, int n)
{
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    vector<int> temp(n);
    bool truth = true;

    for (int i = 0; i < n; i++)
    {
        if (truth)
        {
            temp[i] = v[r--];
        }
        else
        {
            temp[i] = v[l++];
        }

        truth = !truth;
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
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

    maxMin(v, n);

    return 0;
}