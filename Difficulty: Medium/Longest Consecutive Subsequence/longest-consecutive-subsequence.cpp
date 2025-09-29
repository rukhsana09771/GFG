class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> st(arr.begin(), arr.end());
        int longest = 0;
        for(int x : arr){
             // Only start counting if x is start of a sequence
            if(st.find(x-1)==st.end()){
                int curr = x;
                int temp = 1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    temp++;
                }
                longest = max(longest, temp);
            }
        }
        return longest;
    }
};