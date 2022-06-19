// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k){
        
        int i=0 , j=0 , index = 0;
        
        while (i<n && j<m){
            
            if ( arr1[i] <arr2[j] ){
                
                if (k-1 == index) return arr1[i];
               
               index++; i++;    
            }
            else {
                
                if (k-1 == index) return arr2[j];
               
               index++; j++;  
            }
        }
        
        while(i<n){
            if (k-1 == index) return arr1[i];
               index++; i++; 
        }
        
        while(j<m){
            if (k-1 == index) return arr2[j];
               index++; j++; 
        }
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends