#include <bits/stdc++.h>
using namespace std;

void swap(int n1, int n2){

    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    cout<<"n1 = "<<n1<<endl<<"n2 = "<<n2<<endl;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;

    swap(n1, n2);

    return 0;
}