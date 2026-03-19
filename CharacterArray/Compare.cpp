#include <bits/stdc++.h>
using namespace std;

int compare(char s1[], char s2[])
{

    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] > s2[i])
        {
            return 1;
        }
        else if (s1[i] < s2[i])
        {
            return -1;
        }
        else
        {
            i++;
        }
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return 0;
    }
    else if (s1[i] == '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
    return 0;
}

int main()
{
    char s1[101] ;
    char s2[101] ;

    cin.getline(s1, 101);
    cin.getline(s2, 101);

    // cout << compare(s1, s2)<<endl;
    int a = strcmp(s1, s2);

    cout<<a<<endl;

    return 0;
}