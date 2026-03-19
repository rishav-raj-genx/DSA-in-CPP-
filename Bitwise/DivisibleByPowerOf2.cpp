#include <bits/stdc++.h>
using namespace std;

void Divisiblepower(int x){

    if((x&((1<x)-1))==0) cout<<0;
    else cout<<1;
   
}

    int main(){
        int x;
        cin>>x;

        Divisiblepower(x);

    return 0;
}