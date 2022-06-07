class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> r;
        int n = (1<<nums.size());
        for (int i=0;i<n;i++){
              vector <int> t;
            for (int j=0;j<nums.size();j++){
               if ( 1<<j & i ){ t.push_back(nums[j]); }
                
            }
            sort(t.begin(),t.end());
            r.insert(t);
        }
          vector<vector<int>> res;
        for (auto it : r){
            res.push_back(it);
        }
        
        return res;
    }
};