#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(vector<int> v, int n)
{
    unordered_set<int> s;
    vector<int>vnew;

    for (int i = 0; i < n; i++)
    {
        if(!s.count(v[i])){

            vnew.push_back(v[i]);

        }
        s.insert(v[i]);
    }

    return vnew;
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

    vector<int> a = duplicates(v, n);

    for (auto x : a) cout << x << endl;

    return 0;
}