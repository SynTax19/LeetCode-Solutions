class Solution {
public:
    vector<int> majorityElement(vector<int>& n) {
        
        int k = n.size()/3; map <int,int> mp;
        for (int i=0;i<n.size();i++){
            mp[n[i]]++;
        }
        vector<int> v;
        for (auto it : mp){
            if (it.second > k) v.push_back(it.first);
        }
        return v;
        
    }
};