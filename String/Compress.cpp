#include <bits/stdc++.h>
using namespace std;

string compress(string s, int n)
{

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        int cnt = 0;

        while (i < n && s[i] == ch )
        {
            cnt++;
            i++;
        }

        s[j++] = ch;
        string snew = to_string(cnt);
        cout<<cnt<<endl;
        for (char x : snew)
        {
            s[j++] = x;
        }
        i--;
    }
    s.resize(j);
    return s;
}

int main()
{
    string s;
    getline(cin, s);

    int n = s.length();

    cout << compress(s, n);

    return 0;
}
