#include <bits/stdc++.h>
using namespace std;

int pre(vector<int> v, int n)
{
    int sum = 0;

    vector<int> pref(n, 1);

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    return pref[n - 1];
}

int suf(vector<int> v, int n)
{
    int sum = 0;
    vector<int> suff(n, 1);

    for (int i = n - 2; i >= 0; i++)
    {
        suff[i] *= suff[i + 1] + v[i];
    }

    return suff[0];
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int pref = pre(v, n);
    int suff = suf(v, n);

    cout << pref << endl;
    cout << suff << endl;

    return 0;
}