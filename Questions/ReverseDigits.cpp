#include <iostream>
using namespace std;

int reverseDigits(int num){

    int reverse=0;

    for( ;num>0; num=num/10){
        
        int i=num%10;

        reverse = reverse * 10 + i;

    }

    return reverse;
}

int main(){
    int num;
    cin>>num;

    cout<<reverseDigits(num)<<endl;

    return 0;
}