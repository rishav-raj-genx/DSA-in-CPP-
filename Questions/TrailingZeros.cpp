#include <bits/stdc++.h>
using namespace std;

int zero(long long n){

    int i = 5, cnt = 0;
    while(i<=n){

        cnt += n/i;
        i *= 5;

    }    
    return cnt;
}

int main(){
    long long n;
    cin>>n;

    cout<<zero(n)<<endl;

    return 0;
}