// User function Template for C++
class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // Your code here
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i=0; i<arr.size(); i++){
            int rem = target - arr[i];
            if(mp.find(rem)!=mp.end()){
                ans.push_back(rem);
                ans.push_back(arr[i]);
                return ans;
            }
            mp[arr[i]] = i;
        }
        return {};
    }
};