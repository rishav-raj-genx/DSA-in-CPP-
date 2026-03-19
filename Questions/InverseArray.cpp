#include<bits/stdc++.h>
using namespace std;

void inverse(vector<int>v, int n){

    vector<int>vn(n);

    for(int i=0; i<n; i++){
        vn[v[i]]=i;
    }

    for(int i=0; i<n; i++){
        cout<<vn[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,val;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    inverse(v, n);

    return 0;
}