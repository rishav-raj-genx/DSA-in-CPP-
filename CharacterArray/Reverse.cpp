#include <bits/stdc++.h>
using namespace std;

void reverse(char ar[], int n){

    int l = 0; 
    int r = n-1;

    while(l<r){
        swap(ar[l], ar[r]);
        l++;
        r--;
    }

    for(int i=0; i<n; i++){

        cout<<ar[i]<<" ";

    }
    cout<<endl;

}

int main(){
    int n;
    cin>>n;

    char ar[n];

    for(int i=0; i<n; i++){

        cin>>ar[i];

    }

    reverse(ar, n);

    return 0;
}