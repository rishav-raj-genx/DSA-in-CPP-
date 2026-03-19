#include <bits/stdc++.h>
using namespace std;

string good(string s, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
        }
        else
        {
            return "False";
        }
    }
    return "True";
}

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    cout << good(s, n) << endl;

    return 0;
}