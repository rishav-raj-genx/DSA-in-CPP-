#include <bits/stdc++.h>
using namespace std;

int uni(int ar1[], int n, int ar2[], int m)
{

    int arr[n];
    int k = 0, j = 0, i = 0;

    while (i < n && j < m)
    {
        if (ar1[i] <= ar2[j])
        {
            if (k==0 && ar1[i] != arr[k - 1])
            {
                arr[k] = ar1[i];
                k++;
            }
            i++;
        }
        else if (ar2[j] <= ar1[i])
        {
            if (k == 0 && ar2[j] != arr[k - 1])
            {
                arr[k] = ar2[j];
                k++;
            }

            j++;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     if (ar1[i] <= ar2[j])
        //     {
        //         arr[k] = ar1[i];
        //         k++;
        //         i++;
        //     }
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     if (ar2[j] <= ar1[i])
        //     {
        //         arr[k] = ar2[j];
        //         k++;
        //         j++;
        //     }
        // }
    }

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}

int main()
{

    int n = 6;
    int ar1[] = {1, 1, 2, 3, 4, 5};

    int m = 6;
    int ar2[] = {2, 3, 4, 4, 5, 6};

    uni(ar1, n, ar2, m);

    return 0;
}