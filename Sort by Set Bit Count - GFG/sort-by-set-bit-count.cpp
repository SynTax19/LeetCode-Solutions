// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    static bool cmp(pair<int,pair<int,int>> p1 , pair<int,pair<int,int>> p2) {
    if (p1.first > p2.first)   return true;
    else if (p1.first == p2.first) 
        if (p1.second.first < p2.second.first)   return true;
    
    return false;
  }
    void sortBySetBitCount(int arr[], int n){
     
     vector<pair<int,pair<int,int>>> v;
     
     for (int i=0;i<n;i++){
         
         int num = arr[i] , c=0;
         while(num){
             if (num%2) c++;
             num/=2;
         }
         v.push_back({c,{i,arr[i]}});
     }
     
     sort (v.begin(),v.end(),cmp);
     int i=0;
     for (auto it : v){
         arr[i]=it.second.second;
         i++;
     }
    
}    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends