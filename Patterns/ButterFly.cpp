#include <iostream>
using namespace std;

void butterFly(int n){

    for ( int i = 0; i<n ; i++){

        for(int j=0; j<2*n-1; j++){
            if(j<=i || j>=2*n-i-2 ){
            cout<<"* ";
        } else {
            cout<< "  ";
        }
    }
        cout<<endl;
    } 
    for ( int i = n-2; i>=0 ; i--){

        for(int j=0; j<2*n-1; j++){
            if(j<=i || j>=2*n-i-2 ){
            cout<<"* ";
        } else {
            cout<< "  ";
        }
    }
        cout<<endl;
    }

}

int main(){
    int n;
    cin>>n;

    butterFly(n);

    return 0;
}