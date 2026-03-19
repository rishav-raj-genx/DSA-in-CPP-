#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int i = 0;
    char ch;

    while (true)
    {
        ch = cin.get();
        str[i] = ch;
        i++;
        if (ch == '\n')
        {
            break;
        }
    }

    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}