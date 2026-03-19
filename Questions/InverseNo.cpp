#include <bits/stdc++.h>
using namespace std;

void inverse(int n){

    int digit = 0, reverse = 0;

    for(int i=1; i<=n || n>0; i++){

        digit = n % 10;

        reverse += i * pow(10,digit-1);

        n/=10;
    }

    cout<<reverse<<endl;
}

int main(){
    int n;
    cin>>n;

    inverse(n);

    return 0;
}