#include <bits/stdc++.h>
using namespace std;

int multiply(int x, int y, int mul){

    if(x==1 || y==0) return 1;\

    mul = x * multiply(x, y-1, mul);

    return mul;
}

int main(){
    int x, y;
    cin>>x>>y;

    int mul = 1;
    cout<<multiply(x,y,mul)<<endl;

    return 0;
}