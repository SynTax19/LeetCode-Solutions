class Solution {
public:
    string countAndSay(int n) {
        
        string s = "1"; n-=1;
        while(n--){
            int c=1 ; string cur="";
            for (int i=0;i<s.size();i++){
                
                if (s[i] == s[i+1] && i<s.length()-1) c++;
                
                else {
                   
                         cur += to_string(c) + s[i]; c=1;
                      
                }
            }
            
            s = cur;
        }
        return s;
    }
};