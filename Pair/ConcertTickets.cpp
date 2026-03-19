#include <bits/stdc++.h>
using namespace std;

void concert(int n, int m, vector<long long>va, vector<long long>vb){

    for(int i = 0; i<n; i++)
    {
        bool flag = false;

        for(int j = 0; j<m; j++)
        {
            if(vb[j]==va[i]){

                 cout<<vb[j]<<endl;

                 flag = true;

                 break;
            }
        }

        if(!flag)
        {
            cout<<-1;
        }
    }
}

int main(){
    long long n, m;

    cin>>n>>m;

    vector<long long>va(n);
    vector<long long>vb(m);

    for(int i = 0; i<n; i++)
    {
        cin>>va[i];
    }

    for(int i = 0; i<m; i++)
    {
        cin>>vb[i];
    }
 
    concert(n, m, va, vb);

    return 0;
}