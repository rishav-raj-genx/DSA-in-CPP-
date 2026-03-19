#include <bits/stdc++.h>
using namespace std;

void merge(int n, vector<int> v1, int m, vector<int> v2)
{
    vector<int> vnew(n + m);

    int j = 0, k = 0;

    for (int i = 0; i <= (n + m); i++)
    {
        if (j<n && k<m)
        {
            if (v1[j] < v2[k])
            {
                vnew[i] = v1[j];
                j++;
            }
            else if (v1[j] > v2[k])
            {
                vnew[i] = v2[k];
                k++;
            }
            else if (v1[j] == v2[k])
            {
                vnew[i] = v1[j];
                i++;
                vnew[i] = v2[k];

                j++;
                k++;
            }
        } else if(k==m) {
            vnew[i] = v1[j];
            j++;
        } else if(j==n){
            vnew[i] = v2[k];
            k++;
        }
    }

    for (int i = 0; i < (n + m); i++)
    {
        cout << vnew[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, val1;
    cin >> n;

    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        cin >> val1;
        v1.push_back(val1);
    }

    int m, val2;
    cin >> m;

    vector<int> v2;

    for (int i = 0; i < m; i++)
    {
        cin >> val2;
        v2.push_back(val2);
    }

    merge(n, v1, m, v2);

    return 0;
}