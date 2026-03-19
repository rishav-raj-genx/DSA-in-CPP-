#include <iostream>
#include <vector>
using namespace std;

void twoNeighbours(vector<int>v, int n){
    
    for(int i=0; i<n; i++){

    int cnt=0;

       for(int j=0; j<n; j++){

        if(v[j] > v[i]){
            cnt++;
        }
       }

       if(cnt>=2){
        cout<<v[i]<<" ";
       }
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

    twoNeighbours(v, n);

    return 0;
}