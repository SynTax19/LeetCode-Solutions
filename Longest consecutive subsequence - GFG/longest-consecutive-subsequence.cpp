// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      map<int,int> mp;
      for (int i=0;i<N;i++){
          mp[arr[i]]=1;
      }
      int f=0,c=0 , x=-1,y=-1 , res=0;
      for (auto it : mp){
          if (f==0){ x=it.first; f++; continue; }
          y = it.first;
          if (y-x == 1){
              c++; res = max(res,c);
          }else {
              c=0;
          }
          x=y;
      }
      if (c!=0){ res= max(res,c); }
      return res+1;
      
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends