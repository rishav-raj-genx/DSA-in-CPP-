#include<bits/stdc++.h>
using namespace std;

int palindrome(int n , int r){

    if(n==0) return r;

    return palindrome(n/10, r * 10 + n%10);
}

int main(){
    int n = 12621;
    int r = 0;
    r = palindrome(n, r);

    if(n == r) cout<< true;
    else cout<<false;
    return 0;
}