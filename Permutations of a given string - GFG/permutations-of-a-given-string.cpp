// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	    void recursion (string s, int ind , vector<string> &ans){
	        
	        if ( ind == s.length()) { ans.push_back(s); return; }
	     
	        for (int i=ind;i<s.length();i++){
	            swap(s[i],s[ind]); 
	            recursion(s,ind+1,ans);
	            swap(s[ind],s[i]);
	        }
	    }
		vector<string>find_permutation(string s){
		    
		    string temp="";
		    vector<string>res, ans;
		    recursion (s,0,res);
		    sort(res.begin(),res.end());
		    for (int i=1;i<res.size()+1;i++){
		        if (res[i] != res[i-1]) 
		            ans.push_back(res[i-1]);
		    }
		  //  if (res[res.size()-2] != res[res.size()-1]) 
		  //          ans.push_back(res[res.size()-1]);
		    
		   
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends