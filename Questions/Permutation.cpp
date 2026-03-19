#include <iostream>
using namespace std;

int factorial(int num){
    int factorial = 1;
    
for (int i=1; i<=num; i++){

     factorial *= i;

}
return factorial;
}

int permutation(int n, int r){

    return factorial(n)/factorial(n-r);
    
}

int main (){

    int n,r;
    cin>>n>>r;

    cout<< permutation(n,r)<<endl;

    return 0;
}