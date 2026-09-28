

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<long long> v(n);
        for(auto &a : v) cin >> a;
        
        long long maxy = 0; 
        bool flag = true;
        bool del = false; 
        long long miny = 0;      
        
        for(long long i = 0; i < n; i++) {

            maxy += v[i];
            miny = min(miny, v[i]);
            
            if(maxy < 0) {

                if(!del) {
                    maxy -= miny;
                    del = true;
                
                    if(maxy < 0) {
                        flag = false;
                        break;
                    }
                } else {
                    
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}
