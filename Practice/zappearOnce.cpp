#include <bits/stdc++.h>
using namespace std;

int appear(int arr[], int n){

    for(int i = 0; i<n; i++){

        if(arr[i]==arr[i+1]){
            i++;
        } else {
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int n = 8;

    int arr[] = {1,1,2,2,3,3,4,4,5,5};

    cout<<appear(arr, n)<<endl;

    return 0;
}