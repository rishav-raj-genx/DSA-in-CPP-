#include <bits/stdc++.h>
using namespace std;

int digit(int n, int dig, int sum){

    if(n<=0) return sum;

    sum+=dig;
    n/=10;
    dig = n%10;

    return digit(n, dig, sum);
}

int main(){
    int n = 123456;
    int dig = n%10;
    int sum = 0;

    cout<<digit(n, dig, sum)<<endl;

    return 0;
}