#include <bits/stdc++.h>
using namespace std;

string oddEven(string s, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s[i]++;
        }
        else
        {
            s[i]--;
        }
    }

    return s;
}

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    cout << oddEven(s, n) << endl;

    return 0;
}