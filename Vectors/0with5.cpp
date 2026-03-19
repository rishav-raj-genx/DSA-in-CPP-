#include <iostream>
#include <vector>
using namespace std;

void zeroWith5(vector<int>v, int n){

    for(int i=0; i<n; i++){
        if(v[i]==0){
            v[i]=5;
        }
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
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

    zeroWith5(v, n);

    return 0;
}