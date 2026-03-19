#include <bits/stdc++.h>
using namespace std;

void good(int n)
{
    if (n < 4 && n != 1) cout << "NO SOLUTION";

    else if (n == 1) cout << 1;

    else {
        for (int i = 2; i <= n; i += 2)

            cout << i << " ";

        for (int i = 1; i <= n; i += 2)

            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    good(n);

    return 0;
}
