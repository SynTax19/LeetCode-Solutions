// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
       string s="" ;int c=0 , i=0, pos=0;
       if (N==0) return -1;
       while(N){
           i++; 
           if (N%2 == 0){ s+="0"; }
           else { s+= "1" , c++; pos=i; }
           
           N/=2;
       }
       if (c>1) return -1;
       else return  pos; 
       
       
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
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends