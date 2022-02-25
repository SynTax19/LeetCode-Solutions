class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      
        int m1 = 0, m2=INT_MIN , m3=INT_MIN;
        
        for (int i=0;i<nums.size();i++){
            m3=max(m3,nums[i]);
            
            m1 = max(nums[i] , m1+nums[i]);
            m2= max(m2,m1);
            
        }
        return m2;
    }
};