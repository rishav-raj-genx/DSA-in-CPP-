#include <iostream>
#include <vector>
using namespace std;

void SumOfArray(vector<int>v, int n){

    for(int i=0; i<n; i++){

        v[i] = v[i] + v[i+1];

    }

    for(int i=0; i < n-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, val;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    SumOfArray(v, n);
}