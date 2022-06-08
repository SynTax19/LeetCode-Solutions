class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        
        long long int res = 0 , d = r-l ;
        for (int i=0;i<=31;i++){
            if (d >= (1<<i)) continue; 
            if ((l&(1<<i))  &&  (r&(1<<i)))
                res+=  (1<<i); 
        }
        // while (l!=r){
        //     l>>=1;
        //     r>>=1;
        //     res+=1;
        // }
        // return l<<res;
        
        return res;
    }
};