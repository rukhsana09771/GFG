class Solution {
  public:
        vector<int> nthRowOfPascalTriangle(int n) {
            // code here
            vector<int> ans;
            int val = 1;
            ans.push_back(val);
            for(int i=1; i<n; i++){
                val = val*(n-i);
                val = val/i;
                ans.push_back(val);
            }
            return ans;
        }
};
