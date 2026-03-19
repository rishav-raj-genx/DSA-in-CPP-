#include <bits/stdc++.h>
using namespace std;

void length(char ar[], int n)
{

    int i = 0;

    while (ar[i] != '\0')
    {
        i++;
    }
    cout << i<< endl;
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

    length(ar, n);

    return 0;
}