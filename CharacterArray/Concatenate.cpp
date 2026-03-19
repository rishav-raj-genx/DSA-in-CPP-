#include <bits/stdc++.h>
using namespace std;

void concatenate(char s1[], char s2[])
{

    int i = 0;

    while (s1[i] != '\0')
    {
        i++;
    }

    int j = 0;

    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    cout << s1 << endl;
}

int main()
{
    char s1[101];
    char s2[101];

    cin.getline(s1, 101);
    cin.getline(s2, 101);

    concatenate(s1, s2);

    // cout<<strcat(s1, s2)<<endl;

    return 0;
}
