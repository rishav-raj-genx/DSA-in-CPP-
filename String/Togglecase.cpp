#include <bits/stdc++.h>
using namespace std;

string toggle(string s, int n)
{

    for (int i = 0; i < n; i++)
    {

        if (s[i] <= 'z' && s[i] >= 'a')
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    cout << toggle(s, n) << endl;

    return 0;
}