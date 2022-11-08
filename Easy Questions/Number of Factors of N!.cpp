/*Given a positive integer N, find the number of factors in N! (N factorial).*/

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long factorsOfFactorial(int N)
    {
        long long count = 1;
        
        for(int i = 1 ; i <= N ; i++){
            count = count*i;
            
        }
        
        long long ans = 0;
        
        for(int i = 1 ; i <=count ; i++){
            if(count % i ==0){
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.factorsOfFactorial(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends


 
