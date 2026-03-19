#include <bits/stdc++.h>
using namespace std;

void maxCircularSum(vector<int> v, int n)
{
    int cmin = 0, cmax = 0;
    int gmax = v[0], gmin = v[0];
    int Tsum = 0;

    for (int i = 0; i < n; i++)
    {
        cmax = max(cmax + v[i], v[i]);
        cmin = min(cmin + v[i], v[i]);
        Tsum += v[i];

        gmax = max(gmax, cmax);
        gmin = min(gmin, cmin);
        
    }
    if (gmax > 0)
    {
        cout << max(gmax, Tsum - gmin) << endl;
    }
    else
    {
        cout << gmax << endl;
    }
}

int main()
{

        int n, val;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v.push_back(val);
        }
            maxCircularSum(v, n);
            
    return 0;
}

// 1
// 7
// 8
// -8
// 9
// -9
// 10
// -11
// 12