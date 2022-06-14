// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        
        int ind = 0 , c=1;
        
        for (int i=0;i<n;i++){
            
            if (a[ind] == a[i]) c++;
            else    c--;
            
            if (c == 0){ ind=i; c=1; }
        }
        
        int val = a[ind] ; c=0;
        for (int i=0;i<n;i++){
            if (a[i] == val) c++;
        }
        // cout<<c<<" ";
        if ( c > (n/2) && n%2==0 ) return val;
        if ( c >= (n+1)/2 && n%2==1 ) return val;
        
        return -1;
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends