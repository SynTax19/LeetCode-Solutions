class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        // 1st Approach
//         int mx = -1 , sum = 0 , sumreq=0;
        
//         for (int i=0;i<nums.size();i++) {
//             sum+= nums[i]; mx = max(mx,nums[i]);
//             sumreq+=i;
//         }
//         if (sum == sumreq) return mx+1;
//         else {
//            return mx - (sum - sumreq); 
//         }
        
        // 2nd Approach 
        
        int xx =0;
        for (int i=0;i<nums.size();i++){
            xx = xx^nums[i]; xx^=i;
        }
        xx = xx^nums.size();
        return xx;
        
        
    }
};