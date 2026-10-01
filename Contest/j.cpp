 #include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        vector<int>v(n);
        for(auto &a: v) cin>>a;
        
        int c = 0;
        int sum = 0;

        for(int i = 0; i < n; i++){

            int miny = INT_MAX;

            for(int j = 0; j < k; j++){

                if(miny<v[i]) miny = v[i];

            }

        sum += miny;
        c++;
        if(c == 2 &&)
        }
    }bubeccjcnkkd
    return 0;
}
