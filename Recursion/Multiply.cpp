#include <bits/stdc++.h>
using namespace std;

int multiply(int x, int y){

    if(x==0 || y==0) return 0;

    return x + multiply(x, y-1);
}

int main(){
    int x, y;
    cin>>x>>y;

    cout<<multiply(x,y)<<endl;

    return 0;
}