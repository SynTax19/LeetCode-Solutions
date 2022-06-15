class Solution {
public:
    int search(vector<int>& nums, int k) {
        
        int l = 0 , h = nums.size()-1;
        while(l<=h){
             
            int mid = (l+(h-l)/2);
            
            if (nums[mid] == k) return mid;
            
            if (nums[l] <= nums[mid]){
               
                if (k < nums[mid] && k >=nums[l])   h=mid-1;
                else   l=mid+1;      
                
            }else {
                
                if (k <= nums[h] && k>nums[mid])   l=mid+1; 
                else   h=mid-1;  
                
            }   
        }
        return -1;
    }
};