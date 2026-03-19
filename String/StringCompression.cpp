#include <bits/stdc++.h>
using namespace std;

string compress(string s, int n)
{

    int j=0;

    for (int i = 0; i < s.size(); i++)
    {

        char ch = s[i];
        int cnt = 0;

        while (s[i] == ch && i<n)
        {
            cnt++;
            i++;
        }
        if(cnt == 1){
            s[j++]= ch;
        } else {
            s[j++]= ch;
            string snew = to_string(cnt);
            for(char x : snew){
                s[j++] = x;
            }
        }
        i--;
    }
    s.resize(j);
    return s;
}

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    cout << compress(s, n);

    return 0;
}