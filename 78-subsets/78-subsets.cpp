class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> r;
        int n = (1<<nums.size());
        for (int i=0;i<n;i++){
              vector <int> t;
            for (int j=0;j<nums.size();j++){
               if ( 1<<j & i ){ t.push_back(nums[j]); }
                
            }
            r.push_back(t);
        }
        return r;
    }
};