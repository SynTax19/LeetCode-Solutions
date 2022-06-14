class Solution {
public:
    
    int power (int x , int y){
        
        int mod = 1337 , res=1;
        x%=mod;
        for (int i=0;i<y;i++){  res = ((res%mod)*x)%mod;  }
        
        return res;   
        
    }
    
    int superPow(int a, vector<int>& b) {
       
        int res=1 , temp=1 , mod = 1337;
        
        for (int i=0;i<b.size();i++){
            
            int x = power ( a, b[i] );
            res = (res*x)%mod;
            
            temp = res; int y  = power ( res, 10 );
            
            res = (y)%mod; 
        }
        return temp;
        
    }
    
  
    
    
};