#include <bits/stdc++.h>
using namespace std;

bool palindrome(char ar[], int n)
{
    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        if (ar[l] == ar[r])
        {
            l++;
            r--;
        }
        else
        {
            return false;
        }
    }
        return true;
}

int main()
{
    int n;
    cin>>n;

    char ar[n];

    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }

    cout<<palindrome(ar, n)<<endl;

    return 0;
}