// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int subset (int n , int arr[] , int target , int ind , vector<vector<int>> &dp){
        
        if (target==0){ return 1; }
        if ( ind ==0){ 
            if (target == arr[ind])
               return 1; 
            else  
               return 0; 
            
        }
        if ( dp[ind][target] != -1) {
            return dp[ind][target];
        }
        
        bool ntake = false, take = false;
        ntake = subset(n,arr,target,ind-1,dp);
        
        if ( target >= arr[ind] ){
            take = subset(n,arr,target-arr[ind], ind-1 , dp);
        }
        
        return dp[ind][target] = (take || ntake);  
    }
    
    int equalPartition(int N, int arr[])  {
     
        int s=0;
        
        for (int i=0;i<N;i++){ s+= arr[i]; }
        vector<vector <int>> dp(N, (vector<int> (s/2+1 , -1)));
        if (s%2) return 0;
        else {
            
           return subset (N,arr,s/2,N-1 , dp);
            
        }
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends