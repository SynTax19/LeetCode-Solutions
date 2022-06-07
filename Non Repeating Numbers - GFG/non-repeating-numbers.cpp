// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)  {
        
        int x=0;
        for (int i=0;i<nums.size();i++){ x=x^nums[i]; }
        
        int rmsb = x &(-x) , res1=0 , res2=0; 
        
        for (int i=0;i<nums.size();i++){ 
            
            if (nums[i]&rmsb) res1 = res1^nums[i]; 
            else res2 = res2^nums[i]; 
            
        }
        
        if (res1<res2) return { res1,res2 };
        else    return { res2,res1 };
         
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends