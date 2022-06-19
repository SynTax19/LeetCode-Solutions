class Solution {
public:
    int maxDepth(string s) {
        
        int c=0 , res=0;
        for (int i=0;i<s.length();i++){
            
            if (s[i] == '(') c++;
            else if (s[i] == ')') c--;
            
            res=max(res,c);
        }
        return res;
    }
};