#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int sum=0;
    for (; num>0; num=num/10){
        int i = num%10;
        sum+=i;
    }
    return sum;
}

int main(){
    int num;
    cin>>num;

    cout<<sumOfDigits(num)<<endl;

}