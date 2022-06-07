class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int mx=-1 , sum = 0 , sumreq=0;
        
        for (int i=0;i<nums.size();i++) {
            sum+= nums[i]; mx = max(mx,nums[i]);
            sumreq+=i;
        }
        if (sum == sumreq) return mx+1;
        else {
           return mx - (sum - sumreq); 
        }
        
    }
};