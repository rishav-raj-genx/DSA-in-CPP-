#include <bits/stdc++.h>
using namespace std;

    string str[] = {"zero","one", "two", "three", "four", "five", "six","seven", "eight", "nine"};


int spell(int n){

    multiply(n/10);

    if(n==1 || n==0) return 1;

    n = n%10;
}

int main(){
    int n;
    cin>>n;

    cout<<spell(n)<<endl;

    return 0;
}