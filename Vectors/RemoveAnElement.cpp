#include <iostream>
#include <vector>
using namespace std;

void removeAnArray(vector<int> v, int n, int target){

    int newl=0;

    for(int i=0; i<n; i++){
        if(v[i]!=target){
            v[newl++]=v[i];
        }
    }

    for(int i=0; i<newl; i++){
        cout<<v[i]<<" ";
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

    int target;
    cin>>target;

    removeAnArray(v, n, target);

    return 0;
}