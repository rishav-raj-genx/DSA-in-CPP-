#include <bits/stdc++.h>
using namespace std;

void copy(char s1[], char s2[])
{

    int i = 0;

    while (s1[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
        }

        cout<<s1<<endl;
}

int main()
{
    char s1[101] ;
    char s2[101] ;

    cin.getline(s1, 101);
    cin.getline(s2, 101);
    
    // copy(s1, s2);

    cout<<strcpy(s1, s2)<<endl;

    return 0;
}
