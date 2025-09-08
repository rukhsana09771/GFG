class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int curr = arr[0], ans = arr[0];
        for(int i=1; i<arr.size(); i++){
            curr = max(arr[i], curr+arr[i]);
            if(curr>ans) ans = curr;
        }
        return ans;
    }
};