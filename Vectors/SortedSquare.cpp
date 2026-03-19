#include <iostream>
#include <vector>
using namespace std;

void sortedSquares(vector<int>v, int n){
    
    for(int i=0; i<n; i++){
        v[i] = v[i] * v[i];
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

    sort(v.begin(), v.end());

    sortedSquares(v, n);

    return 0;
}