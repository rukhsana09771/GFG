class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> ans;
        map<int, int> m;
        int n = arr.size();
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        for(int j=1; j<=n; j++){
            if(m.find(j)!=m.end()){
                ans.push_back(m[j]);
            }else ans.push_back(0);
        }
        return ans;
    }
};
