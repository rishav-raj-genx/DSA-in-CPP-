#include <bits/stdc++.h>
using namespace std;

int missing(vector<long long> v, long long n){

    long long sum = 0;
    
    for(int i = 0; i<n; i++){
        sum += v[i];
    }

    return (n*(n+1)/2) - sum ;
}

int main(){
    long long n;
    cin>>n;

    vector<long long> v(n);

    for(int i = 0; i<n-1; i++){
        cin>>v[i];
    }

    cout<<missing(v, n)<<endl;

    return 0;
}