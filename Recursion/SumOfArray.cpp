#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v, int n, int i){

    if(i == n-1) return v[i];

    return sum(v, n, i+1) + v[i] ;
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i = 0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    cout<<sum(v, n, 0)<<endl;
    return 0;
}
