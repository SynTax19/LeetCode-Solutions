class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l=0 , h=numbers.size()-1;
        vector<int> v(2,0);
        
        while(l<h){
            
            if (numbers[l]+numbers[h] == target){
                v[0] = l+1;
                v[1] = h+1;
                break;
            }
            else if (numbers[l]+numbers[h] > target){
                h--;
            }else {
                l++;
            }
        }
        return v;
    }
};