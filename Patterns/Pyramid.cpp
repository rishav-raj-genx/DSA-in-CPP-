#include <iostream>
using namespace std;

void pyramid(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(j>n-i && j<n+i ){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    pyramid(n);

    return 0;
}