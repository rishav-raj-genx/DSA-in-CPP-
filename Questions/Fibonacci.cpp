#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){

    int a = 0;
    int b = 1;
    int x = a + b;

    for(int i = 0; i<n; i++){

        a = b;
        b = x;
        x = a + b;

    }
    cout<<a<<endl;
}

int main(){
    int n;
    cin>>n;

    fibonacci(n);

    return 0;
}