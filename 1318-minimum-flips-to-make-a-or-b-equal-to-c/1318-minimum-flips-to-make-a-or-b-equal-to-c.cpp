class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res=0;
        for (int i=0;i<=31;i++){
            
            int av=0,bv=0,cv=0;
            if ( (1<<i)&a ) av=1;
            if ( (1<<i)&b ) bv=1;
            if ( (1<<i)&c ) cv=1;
            
            
            if ( av == 0 && bv == 0 && cv == 1 ) res++;
            else if (av == 1 && bv == 1 && cv == 0) res+=2; 
            else if (cv == 0){
                if (av == 1 || bv == 1) { res++; }
            }       
        }
        return res; 
    }
};