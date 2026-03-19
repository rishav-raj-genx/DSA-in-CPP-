#include<bits/stdc++.h>
using namespace std;

void increasing(int n){

    if(n==0) return;

    increasing(n-1);
    cout<<n<<" "<<endl;
}

int main(){
    int n;
    cin>>n;

    increasing(n);

    return 0;
}