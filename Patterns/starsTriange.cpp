#include <iostream>
using namespace std;

void stars(int n){
    for(int i=0; i<n; i++){
        int k=1;
          for(int j=0; j<2*n-1; j++){
            if(j>=i && j<2*n-i-1 && k==1){
                cout<<"* ";
                k=0;
            } else {
                cout<<"  ";
                k=1;
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