// #include <bits/stdc++.h>
// using namespace std;

// void dnf(vector<int> v, int n)
// {

//     int l = 0, r = n - 1;
//     int mid = 0;

//     while (mid <= r)
//     {
//         if (v[mid] == 1)
//         {
//             mid++;
//         }
//         else if (v[mid] == 0)
//         {
//             swap(v[l], v[mid]);
//             l++;
//             mid++;
//         }
//         else if (v[mid] == 2)
//         {
//             swap(v[mid], v[r]);
//             r--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int n, val;
//     cin >> n;

//     vector<int> v;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> val;
//         v.push_back(val);
//     }
//     dnf(v, n);

//     return 0;
// }

// 10
// 1 0 1 2 0 1 2 0 0 2

#include <bits/stdc++.h>
using namespace std;

void dnf(vector<int> v, int n)
{

    int l = 0, r = n - 1, mid = 0;

    while (mid <= r)
    {

        if (v[mid] == 1)
        {
            mid++;
        }
        else if (v[mid] == 0)
        {
            swap(v[l], v[mid]);
            l++;
            mid++;
        }
        else if (v[mid] == 2)
        {
            swap(v[mid], v[r]);
            r--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {2, 1, 0, 2, 1, 0, 0, 1, 2};

    dnf(v, 9);

    return 0;
}