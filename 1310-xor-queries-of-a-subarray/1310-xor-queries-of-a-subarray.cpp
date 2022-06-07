class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> pre(n,0);
        pre[0] = arr[0];
        for (int i=1;i<n;i++)
            pre[i] = pre[i-1]^arr[i];
        
        vector<int> res;
        
        for (auto it : queries){
            
            int L = it[0] , R = it[1];
            if ( L == 0 ) res.push_back(pre[R]);
            else {
                
                res.push_back( pre[R]^pre[L-1] );
            }
        }
            return res; 

    }
};