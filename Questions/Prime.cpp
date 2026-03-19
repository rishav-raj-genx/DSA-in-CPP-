#include <iostream>
using namespace std;

string prime(int& num){

    if (num == 1){

          return "Neither Prime Nor Composite";
    
        }

    for(int i=2; i<num; i++){

        if(num%i != 0 || num == 2){

          return "Prime";

        } else if (num%i == 0 || num<<1){

          return "Not Prime";
    
        }
    }
    return 0;
}

int main(){
    int num;
    cin >> num;
    
    cout<<prime(num)<<endl;
    
    return 0;
}