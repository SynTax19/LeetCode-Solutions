class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        map<int,int> mp; mp.clear();
        for (int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        int res=0; 
        for (auto it : mp){
            res+= (it.second*(it.second-1))/2;
        }
        return res;
        
    }
};