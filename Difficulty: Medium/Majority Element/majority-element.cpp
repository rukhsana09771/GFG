class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int ans = -1;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto &x : mp){
            if(x.second>n/2) ans = x.first;
        }
        return ans;
    }
};