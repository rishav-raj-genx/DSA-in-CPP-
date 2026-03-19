#include <iostream>
using namespace std;

void reverseAlphabet(int n){

    for(int i=0; i<=n; i++){
    
    char ch='A';

    for (int j=0; j<=n-i; j++ ){
        cout<<ch++;
    }

    for(int j=0; j<=n-i; j++){
        cout<<--ch;
    }
    cout<<endl;
    }

}

int main(){
   int n;
cin>>n;

reverseAlphabet(n);

return 0;
}