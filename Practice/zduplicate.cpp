#include <bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n){

    int sum = 0;

for(int i=0; i<n-1; i++){

    sum += arr[i];

}

return (n*(n+1))/2 - sum;
}

int main(){
    int n = 5;

    int arr[]= {1,2,4,5};

    cout<<"Missing Number = "<< duplicate(arr, n)<<endl;;

    return 0;
}