class Solution {
public:
    int getSum(int a, int b) {
        
        int mn = min (a,b) , mx = max (a,b);
        if ( mn >=0 || mx >=0){
            while (mx--)
            mn++;
        
        return mn;
        }
        else {
            
            while(mn++)
                mx--;
            return mx;
        }
        
    }
};