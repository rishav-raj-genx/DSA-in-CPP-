#include <iostream>
using namespace std;

void oddEven(int num){

    if(num & 1){
        cout<<"Odd"<<endl;
    } else {
        cout<<"Even"<<endl;
    }
}

int main(){
    int num;
    cin>>num;

    oddEven(num);

    return 0;
}