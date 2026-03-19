#include <bits/stdc++.h>
using namespace std;

int pre(vector<int>& v, int n, vector<int>pro, int l,  int r)
{

    int sum = 0;

    pro[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pro[i] *= pro[i-1]+v[i];
    }
    return sum = pro[r]- pro[l-1];
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n), pro(n, 1);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l, r;
    cin>>l>>r;

   int a = pre(v, n, pro, l, r);

        cout << a<< " ";
    

    cout<<endl;
    
    return 0;
}