#include <iostream>
#include <vector>
using namespace std;

void LargestElement(vector<int> v, int n){

    int largest = INT32_MIN;

    for(int i=0; i<n; i++){

        if(largest < v[i]){
            largest = v[i];
        }
    }

    cout<<largest<<endl;

}

int main(){

    int n,val;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    LargestElement(v,n);

    return 0;
}