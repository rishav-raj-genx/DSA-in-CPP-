#include <bits/stdc++.h>
using namespace std;

void multiply(vector<int> v, int n){

    vector<int>vnew(n,1);

    for(int i=0; i<n ; i++){

        if(v[i]==v[n-1]){
            vnew[i]*=v[i]* v[i-1];
        } else if(v[i]>v[0] && v[i]<v[n-1]){
            vnew[i]*=v[i-1]*v[i+1];
        } else if (v[i]==v[0]){
            vnew[i]*=v[i];
        }
    }

    for(int i=0; i<n; i++){
        cout<<vnew[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    multiply(v, n);

    return 0;
}