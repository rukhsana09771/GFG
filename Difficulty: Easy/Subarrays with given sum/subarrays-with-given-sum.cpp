class Solution {
  public:
    int subArraySum(vector<int>& arr, int k) {
        // code here.
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0, prefixSum = 0;
        for(int i=0; i<arr.size(); i++){
            prefixSum += arr[i];
            int remove = prefixSum - k;
            count += mp[remove];
            mp[prefixSum] += 1;
        }
        return count;
    }
};