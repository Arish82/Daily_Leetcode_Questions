//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    void print(vector<int>& arr){
        for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
        
        cout<<"\n";
    }
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        
        set<int> u;
        for(int i=0;i<n;i++)
        {
            u.insert(arr1[i]);
        }
        for(int i=0;i<m;i++)
        {
            u.insert(arr2[i]);
        }
        
        
        vector <int> f;
        for(int x:u)
        {
            f.push_back(x);
        }
        return f;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends