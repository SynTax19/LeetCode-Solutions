class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int l=0 , h=nums.size()-1;
        vector<int> v(2,0);
        vector <pair<int,int>> num;
        for (int i = 0;i<nums.size();i++){
            num.push_back({nums[i] , i});
        }
        sort(num.begin() , num.end());
        
        while(l<h){
            
            if (num[l].first +num[h].first == target){
                v[0] = num[l].second;
                v[1] = num[h].second;
                break;
            }
            else if (num[l].first +num[h].first > target){
                h--;
            }else {
                l++;
            }
        }
        return v;
    }
};