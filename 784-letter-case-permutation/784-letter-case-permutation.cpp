class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        // 1st Recursion
        // 2nd Power Set
        vector<string> res;
        set<string> temp;
        int n = s.size();
        for (int i=0;i<(1<<n);i++){
            
            string ss="";
            for (int j=0;j<n;j++){
                
                if ((i & (1<<j)) && (s[j] >='a' && s[j]<='z'))
                    ss.push_back(toupper(s[j]));
                else if ((i & (1<<j)) && (s[j] >='A' && s[j]<='Z'))
                    ss.push_back(tolower(s[j]));
                else 
                    ss.push_back(s[j]);  
            }
            temp.insert(ss);
        }
        for (auto it : temp){
            res.push_back(it);
        }
        return res;
    }
};