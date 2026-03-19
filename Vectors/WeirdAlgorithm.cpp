#include <bits/stdc++.h>
using namespace std;

void weird(int n){

    cout<<n<<" ";

    while(n!=1){

    if(n%2==0)  n/=2;
    
    else   n = (n*3)+1;
    
    cout<< n <<" ";
}
cout<<endl;
}

int main(){
    long long n;
    cin>>n;

    weird(n);

    return 0;
}