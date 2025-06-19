// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> ans;
        if(n>=1) ans.push_back(0);
        if(n>=2) ans.push_back(1);
        int x = 0, y = 1;
        
        for(int i=2; i<n; i++){
            int c = x + y;
            ans.push_back(c);
            x = y;
            y = c;
        }
        return ans;
    }
};