#include <iostream>
#include <vector>
using namespace std;

void majorityElement(vector<int>v, int n){

    for(int i=0; i<n; i++){

    int z=0;

        for(int j=0; j<n; j++){
            if(v[i]==v[j]){
                z++;
            }
        }
        if(z>(n/2)){
        cout<<v[i]<<endl;
        break;
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
    majorityElement(v, n);

    return 0;
}