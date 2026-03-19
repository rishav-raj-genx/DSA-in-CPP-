#include <bits/stdc++.h>
using namespace std;

bool check(int ar[], int n){

    if(n == 1 || n == 0) return true;

    return (ar[n-1] >= ar[n-2]) && (check(ar, n-1));
}

int main(){
    int n;
    cin>>n;

    int ar[n];

    for(int i = 0; i<n; i++){
        cin>>ar[i];
    }

    cout<<check(ar, n)<<endl;

    return 0;
}