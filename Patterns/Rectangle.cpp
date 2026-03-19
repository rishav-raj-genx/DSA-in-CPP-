#include <iostream>
using namespace std;

void rectangle(int num, int num2){

    for(int i=0; i<num; i++){
        for(int j=0; j<num2; j++){
            cout<<"* ";
            cout<<" ";

        }
        cout<<endl;
    }
}

int main(){
    int num,num2;
    cin >> num>>num2;

    rectangle(num,num2);
    return 0;
}