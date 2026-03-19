#include <bits/stdc++.h>
using namespace std;

void targetSum(int n, vector<int> v, int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == target)
                {
                    cout << v[i] <<", "<< v[j] << " and "<<v[k]<<endl;
                }
            }
        }
    }
}

int main()
{

    int val;
    int n;
    vector<int> v;
    int target;

    cin >> n;

    for (int i = 0; i < n && n < 1000 && n > 1; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    cin >> target;

    targetSum(n, v, target);

    return 0;
}