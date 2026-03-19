#include <iostream>
using namespace std;

void diamond(int n){
        int k=0;
    for(int i=0; i<2*n-1; i++){
        if(i<n){
            k++;
        } else {
            k--;
        }
        for(int j=0; j<=2*n-1; j++){
            if(j >= n-k && j<n+k-1){
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

    diamond(n);

    return 0;
}


