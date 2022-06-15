// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int prev[n+1]={0};
        
        prev [0]=arr[0] ;
        
        // for (int i=2;i<n+1;i++) { prev[i] = max( prev[i-1], prev[i-2]+arr[i-1]);    }
        
        for (int i=1;i<n;i++){
            int t = -1 , nt = -1;
            if (i>1) t = arr[i]+prev[i-2];
            else  t = arr[i];
            
            nt = prev[i-1];
            
            prev[i] = max(t,nt);
        }
        
        
        
        return prev[n-1];
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends