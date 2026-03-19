#include <iostream>
#include <vector>
using namespace std;

void AllSubArray(vector<int>v , int n){

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<v[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    int n,val;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    AllSubArray( v, n);
}