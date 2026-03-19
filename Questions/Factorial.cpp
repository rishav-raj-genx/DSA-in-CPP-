#include <iostream>
using namespace std;

int factorial(int num){
    int j = 1;
    
    for(int i=1; i<=num; i++){

        if(num>0){
        j*=i;
        }
    }
     return j;
}

int main (){
    int num;
    cin >> num;

    cout<<factorial(num)<<endl;

    return 0;
}