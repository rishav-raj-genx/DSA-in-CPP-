#include <bits/stdc++.h>
using namespace std;

// void square(vector<int> &v, int n){

//     for(auto &b : v) b *= b;

//     sort(v.begin(), v.end());

//     for(auto c : v) cout<<c<<" ";
//     cout<<endl;
// }

void square(vector<int> &v, int n)
{

    int l = 0;
    int r = n - 1;
    vector<int> ans;

    while (r >= l)
    {
        if (abs(v[l]) < abs(v[r]))
        {
            ans.push_back(v[r] * v[r]);
            r--;
        }
        else
        {
            ans.push_back(v[l] * v[l]);
            l++;
        }
    }

    reverse(ans.begin(), ans.end());

    for (auto c : ans)
        cout << c << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (auto &a : v)
        cin >> a;

    square(v, n);

    return 0;
}