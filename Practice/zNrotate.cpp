#include <bits/stdc++.h>
using namespace std;

int rotate(int arr[], int n, int k)
{

    // for (int j = 0; j < k; j++)
    // {
    //     int temp = arr[0];
    //     for (int i = 0; i < n; i++)
    //     {
    //         arr[i] = arr[i + 1];
    //     }
    //     arr[n - 1] = temp;
    // }

    // for(int i = 0; i<n; i++){
        reverse(arr, arr+k);
        reverse(arr+k, arr+n);
        reverse(arr,arr+n);
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

int main()
{
    int n = 9;

    int k = 4;

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    rotate(arr, n, k);

    return 0;
}