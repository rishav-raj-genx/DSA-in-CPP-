#include <iostream>
#include <vector>
using namespace std;

void ZeroToEnd(vector<int> v, int n){

    int j = -1;

    for(int i=0; i<n; i++){

        if(v[i]==0){
            j=i;
            break;
        }
    }

    for(int i = j+1 ; i<n; i++){

        if(v[i]!= 0){
            swap(v[i], v[j]);
            j++;
        }
        }

    for(int i = 0 ; i<n; i++){
             cout<<v[i]<<" ";
        }
        cout<<endl;
}

int main(){
    int n,val;
    
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }

    ZeroToEnd(v, n);

    return 0;
}