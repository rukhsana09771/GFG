//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int cppIntType() {
        // code here
        int i;
        cin>>i;
        return i;
    }

    char cppCharType() {
        char c;
        cin>>c;
        return c;
        // code here
    }

        
    float cppFloatType() {
        float f;
        cin>>f;
        return f;
        // code here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends