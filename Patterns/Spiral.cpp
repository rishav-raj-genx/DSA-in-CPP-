#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=1;
    int z = 2*a-1;

    for(int i=0; i<n; i++){

        for(int j=0 ; j<n; j++){

            if( i==0 ){
                cout<<a++<<" ";
            } else if ( j==n-1 ){
                cout<<a++<<" ";
            } else if ( i==n-1 ){
                cout<<a+j<<" ";
            } else if ( j==0 ){
                cout<<a+i<<" ";
            } else if ( j==n-1 ){
                cout<<a++<<" ";
            } else {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}