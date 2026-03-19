#include <iostream>
using namespace std;

void printPrime(int n){

    for (int i=2; i<n; i++){

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
    int n;
    cin>>n;

    printPrime(n);

    return 0;
}