#include<bits/stdc++.h>
using namespace std;

int sum(int n){

    if(n>0) return n + sum(n-1);
    else if(n==0) return n;

    return 0;
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}