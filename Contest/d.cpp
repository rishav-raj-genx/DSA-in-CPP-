


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int first_1 = -1, last_1 = -1;
        int first_m1 = -1, last_m1 = -1;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 1){
                if(first_1 == -1) first_1 = i;
                last_1 = i;
            }
            if(v[i] == -1){
                if(first_m1 == -1) first_m1 = i;
                last_m1 = i;
            }
        }
        
        if(first_m1 != -1 && (first_1 == -1 || first_m1 < first_1)) {
            v[first_m1] = 1;
        }
        if(last_m1 != -1 && (last_1 == -1 || last_m1 > last_1) && last_m1 != first_m1) {
            v[last_m1] = 1;
        }
        
        for(int i = 0; i < n; i++){
            if(v[i] == -1) {
                v[i] = 0;
            }
            cout << v[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
