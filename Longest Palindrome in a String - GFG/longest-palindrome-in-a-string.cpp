// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        
        int mx=1 , pos=0 , n=s.length();
        for (int i=0;i<n;i++){
            int f = i-1 , l = i+1;
            
            while( s[i] == s[l] && l <n) l++;
            while( s[i] == s[f] && f >=0) f--;
            
            while (s[l] == s[f] && l <n && f >=0) { f--; l++; }
            
            if (l-f-1 >mx){
                mx = l-f-1; pos=f+1;
            }
            
        }
        string str = s.substr(pos,mx);;
        // 
        return str;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends