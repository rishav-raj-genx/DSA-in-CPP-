#include <iostream>
#include <vector>
using namespace std;

void reverseSubArray(vector<int>v, int n, int l, int r){

    while(l<r){
        swap(v[l],v[r]);
        l++;
        r--;
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

    int l, r;
    cin>>l>>r;

    reverseSubArray(v, n, l, r);
    return 0;
}