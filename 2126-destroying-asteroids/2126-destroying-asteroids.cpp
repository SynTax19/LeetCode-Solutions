class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& v) {
        
        sort(v.begin() , v.end());
        int f=0;
        long long int mm = m ;
        for (int i=0;i<v.size();i++){
            
            if ( mm >= v[i] ){ mm += v[i]; }
            else {f=1; break; }
            
        }
        
        if (f==1) return false ;
        else return true;
        
    }
};