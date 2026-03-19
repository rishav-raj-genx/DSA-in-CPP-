#include <iostream>
using namespace std;

void triangle(int n){

    for ( int i =0; i<n ; i++){

      for(int j=0; j<=i; j++){

        if (i%2!=0 && j%2==0){
            cout<<"1 ";
        } else if (i%2==0 || j%2!=0){
            cout<<"0 ";
        }
      }
    cout<<endl;
    }
}
int main(){
    int n;
    cin>> n;

    triangle(n);
}