#include <bits/stdc++.h>
using namespace std;

long long increase(vector<int> v, int n){

    long long cnt = 0;

    for(int i = 1; i<n ; i++){

        if(v[i]<=v[i-1]) {

            cnt += v[i-1] - v[i];
            v[i]= v[i-1];
        }
    }

    return cnt;
}

int main(){
    int n, val;
    cin>>n;

    vector<int>v;

    for(int i = 0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    cout<<increase(v, n)<<endl;

    return 0;
}