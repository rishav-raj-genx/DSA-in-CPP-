#include <iostream>
#include <vector>
using namespace std;

void secondElement(vector<int> v, int n){

    int smallest = INT32_MAX;
    int secondSmallest = INT32_MAX;

    for(int i=0; i<n; i++){

        if(smallest > v[i]){

            secondSmallest = smallest;
            smallest = v[i];

        } else if(v[i]<secondSmallest && secondSmallest!=smallest){

            secondSmallest= v[i];

        }
    }

    cout<<secondSmallest<<endl;

}

int main(){

    int n,val;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    secondElement(v,n);

    return 0;
}