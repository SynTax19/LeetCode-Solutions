class Solution {
public:
    vector<int> countBits(int n) {
        
        vector <int> v; int i=0;
        for (int i=0;i<=n;i++){
            
            int x = i , c=0 , j=1;
            while(x){
               
                if (x & j){ c++; }
                x = x>>1;
            }
            v.push_back(c);
        }
        return v;
    }
};