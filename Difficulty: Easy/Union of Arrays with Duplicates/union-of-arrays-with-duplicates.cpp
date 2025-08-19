class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> st;
        for(auto i: a) st.insert(i);
        for(auto j: b) st.insert(j);
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};