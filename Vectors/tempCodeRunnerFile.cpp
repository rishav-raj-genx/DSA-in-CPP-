
bool partition(vector<int> v){

    int l = 1, r = v.size() - 2;

    int prefix = v[0], suffix = v[v.size() - 1];

    while(l<=r){
        if(prefix == suffix) return true;
        else if(prefix<suffix) prefix+= v[l++];
        else suffix += v[r--];
    }
    return false;
}