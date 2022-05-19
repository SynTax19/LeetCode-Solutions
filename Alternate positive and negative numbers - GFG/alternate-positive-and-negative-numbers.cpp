// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int l) {
	    vector <int> vp, vn;
	    for (int i=0;i<l;i++){
	        if (arr[i] < 0) vn.push_back(arr[i]);
	        else vp.push_back(arr[i]);
	    }
	    int p=0,n=0,i=0;
	    while(i<l){
	        
	        if (p!=vp.size()){
	            arr[i]=vp[p];i++;p++;
	        }
	        if (n!=vn.size()) {
	          arr[i]=vn[n];i++;n++;

	        }
	        
	    }
	    
	    
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends