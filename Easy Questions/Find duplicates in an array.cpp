/*Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        vector<int>count(n,0);
        vector<int>v;
        
        for(int i = 0 ; i <n ; i++){
            count[arr[i]]++;
        }
        for(int i = 0 ; i < n ; i++){
            if(count[i]>1){
                v.push_back(i);
            }
        }
        if(v.empty()){
            return{-1};
        }
        else{
            return v;
        }
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

