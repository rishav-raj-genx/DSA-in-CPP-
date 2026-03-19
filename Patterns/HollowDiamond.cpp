#include <iostream>
using namespace std;

void hollowDiamond( int n){

    for (int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            if(j<n-i || j>=n+i-1){
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
 for (int i=n-1; i>0; i--){
        for(int j=0; j<2*n-1; j++){
            if(j<=n-i || j>=n+i-2){
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

    hollowDiamond(n);

    return 0;
}