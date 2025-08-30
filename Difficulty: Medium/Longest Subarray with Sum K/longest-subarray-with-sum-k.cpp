class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<long long,int> mp;
        int n = arr.size();
        long long sum = 0;
        int maxLen = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            if(sum==k) maxLen = max(maxLen, i+1);
            long long rem = sum - k;
            if(mp.find(rem)!=mp.end()){
                maxLen = max(maxLen, i-mp[rem]);
            }
            if(mp.find(sum)==mp.end()) mp[sum] = i;
        }
        return maxLen;
    }
};