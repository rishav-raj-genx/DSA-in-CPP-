#include <iostream>
using namespace std;

void stars(int n){
    for(int i=0; i<2*n-1; i++){
          for(int j=0; j<n; j++){
            if(j>=n-i-1 && n+j>i ){
                cout<<"* ";
            } else {
                cout<<"  ";
            }
    }
    cout<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;

    stars(n);

    return 0;
}