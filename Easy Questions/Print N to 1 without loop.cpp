Print numbers from N to 1 (space separated) without the help of loops.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
        void printNos(int N) {

        int cnt = 0;

       if(cnt==N)

       return;

        cout<<N<<" ";

       N--;

       printNos( N);

    }

};


//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
