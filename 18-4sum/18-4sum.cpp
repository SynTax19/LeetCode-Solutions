class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort (nums.begin() , nums.end());
        set <vector<int>> res;
        int n = nums.size()-1;
        for (int i=0;i<n-2;i++){
            
            for (int j=i+1;j<n-1;j++){
                
              int l=j+1 , h=n;
              while(l<h){
                long long temp = (long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[h];
                 if (temp == target) {
                    res.insert({nums[i] , nums[j], nums[l] , nums[h]}); h--;l++;
                 }
                 else if (temp > target)  h--;
                 else l++;
                
              }
          }
           
        }
        vector<vector<int>> ans;
        for (auto it: res)
            ans.push_back(it);
        
        return ans;
        
    }
};