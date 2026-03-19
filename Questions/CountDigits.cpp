#include <iostream>
using namespace std;

int countDigits(int num){
    int count=0;
    if(num==0){
        return 1;
    }
    if(num>0){
        while(num>0){
        num/=10;
        count+=1;
    }}
    return count;
}

int main(){
    int num;
    cin>>num;

    cout<<countDigits(num)<<endl;
    return 0;
}