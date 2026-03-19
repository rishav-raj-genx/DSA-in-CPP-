#include <iostream>
using namespace std;

void hourGlass(int n){

    for ( int i = 0; i<n ; i++){
        for(int j=0; j<2*n-1; j++){
            if(j<i){
            cout<<"  ";
            } else if (j<2*n-i-1) {
            cout<<"* ";
        }
    }
    cout<<endl;
}
    for ( int i = n-2; i>=0 ; i--){
        for(int j=0; j<2*n-1; j++){
            if(j<i){
            cout<<"  ";
            } else if (j<2*n-i-1) {
            cout<<"* ";
        }
    }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    hourGlass(n);

    return 0;
}