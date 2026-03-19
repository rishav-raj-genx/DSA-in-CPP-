#include <iostream>
using namespace std ;

void alphabetTriangle(int num){

    char ch ='A';

    for (int i=0; i<num; i++){
        for (int j =0; j<=i; j++){
            cout << ch++<<" ";
        }
        cout<<endl;
    }
}

int main (){
    int num;
    cin>> num;

    alphabetTriangle(num);

    return 0;
}