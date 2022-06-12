class Solution {
public:
    string addStrings(string n1, string n2) {
        
        reverse(n1.begin() , n1.end()); reverse(n2.begin() , n2.end());
        string res="";
        int l1=0,l2=0, carry=0;
        while(l1 != n1.length() || l2 != n2.length() || carry){
            
            int s=0; char c1 = n1[l1] , c2 = n2[l2];
           if (l1!=n1.length()) s += (int) c1-'0',l1++;
           if (l2!=n2.length()) s += (int)  c2-'0',l2++;
            s+= carry;
            carry = s/10;
            s%=10;
            res += (char)s+'0'; 
            
        }
        reverse(res.begin() , res.end());
        return res;
    }
};