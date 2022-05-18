class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin() , v.end());
        vector<vector<int>> res;

        int a=v[0][0] , b=v[0][1] , c=0;
        
        for (auto it: v){
            if (c==0){ c++; continue;}
          
            if (it[0] <= b){
                b  =  max(b,it[1]);
            }
            else {
                
                res.push_back({a,b});
                a = it[0];
                b = it[1];            
            }
        }
        res.push_back({a,b});
        return res;
    }
};
