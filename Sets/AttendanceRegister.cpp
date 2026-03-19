#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    set<string> s;

    while (t--)
    {
        string q;
        cin >> q;

        if (q == "PRESENT")
        {
            string name;
            cin>>name;

            s.insert(name);  
        }
        else if (q == "ABSENT")
        {
            string name;
            cin>>name;

            s.erase(name);
        }
        else if (q == "COUNT")
        {
            cout << s.size()<<endl;
        }
        else if (q == "PRINT")
        {
            for (auto x : s)
            {
                cout << x << " " << endl;
            }
        }
    }
    return 0;
}




// 6
// PRESENT RAJ
// PRESENT KABIR
// PRESENT DEBO
// ABSENT KABIR
// COUNT
// PRINT