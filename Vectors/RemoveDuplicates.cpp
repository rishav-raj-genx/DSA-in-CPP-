#include<iostream>
#include<vector>
using namespace std;

void removeDuplicates(vector<int> v, int n){

    int newl=0;
    int j=-1;

    for(int i=1; i<n; i++){
        if(v[i]!=v[j]){
            j=i;
        }
    }

    for(int i=0; i<n; i++){
        if(v[i]!=v[j]){
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

    removeDuplicates(v, n);

    return 0;
}