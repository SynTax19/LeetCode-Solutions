class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        map <int,int> mp; mp.clear();
        for (int i=0;i<nums.size();i++) mp[nums[i]]++;
        
        for (auto it: mp){
            if (it.second&1) return false;
        }
        return true;
        
        
    }
};