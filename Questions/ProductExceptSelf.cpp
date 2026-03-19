#include <bits/stdc++.h>
using namespace std;

void product(vector<int>v, int n){

    vector<long long>newl(n, 1);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            if(i != j){
                newl[i]*=v[j];
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<newl[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){

        cin>>val;

        if(val<= 10000000 && val>-10000000){

        v.push_back(val);
    }
    }

    product(v, n);

    return 0;
}