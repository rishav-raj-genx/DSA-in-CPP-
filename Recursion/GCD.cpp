#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(b>a) return GCD(b, a);

    if(b==0) return a;

    return GCD(b, a%b);
}
 
int main(){
    int a = 12, b = 20;

    cout<<GCD(a,b)<<endl;

    return 0;
}