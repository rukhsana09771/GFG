class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        unordered_map<int, int> mp;
        for(auto el : arr) mp[el]++;
        vector<int> ans;
        int n = arr.size();
        for(auto x : mp){
            if(x.second>(n/3)) ans.push_back(x.first);
        }
        sort(ans.begin(), ans.end()); 
        return ans;
    }
};