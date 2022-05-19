class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int n = v.size() , res=0; 
        int pre[n]  , suf[n] ;
        
        pre[0]=v[0] , suf[n-1]=v[n-1];
        for (int i=1;i<n;i++){
            pre[i] = min(pre[i-1],v[i]);
        }
        for (int i=n-2;i>=0;i--){
            suf[i] = max(suf[i+1],v[i]);
        }
        for (int i=0;i<n;i++){
            res = max (res, suf[i]-pre[i]);
        }
        return res;
    }
};