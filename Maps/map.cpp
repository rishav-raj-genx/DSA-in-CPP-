#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin>>n;

    map<int, int> mp;

    for(int i = 0; i<n; i++){
        cin>>a>>b;
        mp.insert({a,b});
    }

    mp[12]=44;

    cout<<mp[11]<<endl;;
    cout<<mp.size()<<endl;

    auto it1 = mp.lower_bound(2);
    // auto it = mp.higher_bound(3);

    cout<<it1->first<<" "<<it1->second<<endl;

    // for(auto x : mp){
    //     cout<<x.first <<" "<<x.second<<endl;
    // }

    return 0;
}
