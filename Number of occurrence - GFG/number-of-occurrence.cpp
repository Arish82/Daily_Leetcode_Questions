//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	
	int lower(int arr[],int n, int x){
	    int low=0;
	    int high=n-1;
	    int ans=-1;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        if(arr[mid]==x)
	        {
	            ans=mid;
	            high=mid-1;
	        }
	        else if(arr[mid]<x)
	        {
	            low=mid+1;
	        }
	        else{
	            high=mid-1;
	        }
	    }
	    return ans;
	}	
		
	int upper(int arr[],int n, int x){
	    int low=0;
	    int high=n-1;
	    int ans=-1;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        if(arr[mid]==x)
	        {
	            ans=mid;
	            low=mid+1;
	        }
	        else if(arr[mid]<x)
	        {
	            low=mid+1;
	        }
	        else{
	            high=mid-1;
	        }
	    }
	    return ans;
	}	
	
	int count(int arr[], int n, int x) {
	    int i=upper(arr,n,x);  // log(n)
	   // cout<<"asdf"<<i<<"\n";
	    int j=lower(arr,n,x);  // log(n)
	    if(i==-1 || j==-1) return 0;
	    return i-j+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends