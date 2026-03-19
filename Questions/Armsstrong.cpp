#include <bits/stdc++.h>
using namespace std;

void armstrong(int n)
{

    int z = n, sum = 0, r, cnt, temp = n;

    while (temp > 0)
    {
        cnt++;
        temp /= 10;
    }

    for (int i = 0; z > 0; i++)
    {
        r = z % 10;
        sum = sum + pow(r, cnt);
        z /= 10;
    }

    if (sum == n)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    armstrong(n);

    return 0;
}