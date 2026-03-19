#include <iostream>
using namespace std;

int factorial(int num){
    int factorial = 1;
    
for (int i=1; i<=num; i++){

     factorial *= i;

}
return factorial;
}

int combination(int n, int r){

    return factorial(n)/(factorial(n-r)*factorial(r));
    
}

int main (){

    int n,r;
    cin>>n>>r;

    cout<< combination(n,r)<<endl;

    return 0;
}