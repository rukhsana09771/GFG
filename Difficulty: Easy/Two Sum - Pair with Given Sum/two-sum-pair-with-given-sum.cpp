class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            int rem = target - arr[i];
            if(mp.find(rem)!=mp.end()) return true;
            mp[arr[i]] = i;
        }
        return false;
    }
};