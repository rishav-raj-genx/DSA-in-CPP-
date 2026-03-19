#include<bits/stdc++.h>
using namespace std;

void prefix(vector<int> &v){

    long long sum = 0;

    for(auto &b : v){
        sum += b;
        b = sum;
    }

    for(auto &c : v) cout<<c<<" ";
    cout<<endl;

}

int main(){
    int n ; cin>>n;

    vector<int> v(n);
    for(auto &a:v) cin>>a;

    prefix(v);

    return 0;
}