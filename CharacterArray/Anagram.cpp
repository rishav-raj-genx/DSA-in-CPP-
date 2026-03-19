#include <bits/stdc++.h>
using namespace std;

bool anagram(char ar[], int n, char lar[])
{
    int freq[100];

    for (int i = 0; i < n; i++)
    {
        freq[ar[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        freq[ar[i]]--;
    }

    for (int i = 0; i < n; i++)
    {
         if (freq[ar[i]] != 0)
    {
        return false;
    }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    char ar[n];
    char lar[n];

    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }

    for (int i = 0; i < n; i++)
    {

        cin >> lar[i];
    }

    cout << anagram(ar, n, lar);

    return 0;
}