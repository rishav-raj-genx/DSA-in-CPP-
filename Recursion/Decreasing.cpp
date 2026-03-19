#include<bits/stdc++.h>
using namespace std;

void increasing(int n){

    if(n==0) return;

    cout<<n<<" "<<endl;
    increasing(n-1);
}

int main(){
    int n;
    cin>>n;

    increasing(n);

    return 0;
}