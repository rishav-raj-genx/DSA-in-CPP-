#include <bits/stdc++.h>
using namespace std;

void two( int v[],int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == t)
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}

// void two(vector <int> v, int n, int t){

//     unordered_map<int, int> mp;

//     for(int i = 0; i<n ; i++){
//         mp[v[i]]=i;
//     }

//     for(int i = 0; i<n; i++){
//         int need = t - v[i];
//         if(mp.find(need)!=mp.end()) cout<<mp[need]<<" "<<i<<endl;

//     }


//     for(auto a : mp) cout<<a.first<<" "<<a.second<<endl;
// }



int main()
{
    int n;
    cin>>n;

    // vector<int> v(n) ;
    int v[n];

    for(auto &a:v) cin>>a;

    int t = 6;

    for(auto b:v) cout<<b<<" "<<endl;

    two(v,sizeof(v),  t);

    return 0;
}