#include <iostream>
using namespace std;

void printPrime(int low, int high){
    
    for (int i=low; i<high; i++){

    bool flag=true;

        for(int div=2; div<i; div++){
            if (i%div==0){
                flag = false;
                break;
            }
        }
        if (flag == true){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int low, high;
    cin>>low>>high;

    printPrime(low,high);

    return 0;
}