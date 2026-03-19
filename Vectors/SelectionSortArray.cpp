#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>v, int n){
    
    for(int i=0;i<n; i++){
        
        for(int j=i+1; j<n; j++){
            if (v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }

    for(int i=0; i<n; i++){
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

    selectionSort(v, n);

    return 0;
}