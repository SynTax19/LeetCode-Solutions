// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        
        int n = sqrt(N) , c=0;
        
        // for (int i=1;i<=n;i++){
        //     if (i*i < N) c++;
        // }
        // return c;
        
        int l=1 , h=N;
        while(l<=h){
            long long  mid = (l+(h-l)/2);
            
            if (mid*mid < N){
                c=mid;
                l = mid+1;
            }
            else 
                h = mid-1;
                
            // cout<<c<<" ";        
        }
        
        return c;
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends