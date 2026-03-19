#include <iostream>
using namespace std;

void powerOf2(int num){

    if ((num & (num - 1)) == 0){
        cout<<num<<" is a multiple of 2."<<endl;
    } else {
        cout<<"Not a multiple of 2."<<endl;
    }
}

    int main(){
        int num;
        cin>>num;

        powerOf2(num);

    return 0;
}