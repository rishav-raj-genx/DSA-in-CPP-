
#include<bits/stdc++.h>
using namespace std;
long long main(){
    long long t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i=i+k){
            int sum=0;
            int c=0;
            for(int j=0;j<k;j++){
                if(s[j+i]=='1'){
                    sum++;
                }
                else{
                    c++;
                }
            }
            if(c==0){
                count +=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
