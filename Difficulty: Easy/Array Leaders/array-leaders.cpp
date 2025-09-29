

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n = arr.size();
        int leader = arr[n-1];
        vector<int> ans;
        ans.push_back(leader);
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=leader){
                ans.push_back(arr[i]);
                leader = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};