#include <bits/stdc++.h>
using namespace std;

bool comp(string fir, string sec){
       
        string one = fir + sec;
        string two = sec + fir;

        int i = 0;
        while(one[i] && two[i]){
            if(one[i]>two[i]) return true;
            else if(one[i]<two[i]) return false;
            ++i;
        }
    return false;
}

int main(){

    int T;
    cin>>T;

    while(T--){
        int n;
        cin>>n;

        vector<string> ar;
        string temp;

        for(int i=0; i<n; i++){
            cin>>temp;
            ar.push_back(temp);
        }

        sort(ar.begin(), ar.end(), comp);

        for(int i = 0 ; i<n; i++){
            cout<<ar[i];
        }
        cout<<endl;
    }

    return 0;
}