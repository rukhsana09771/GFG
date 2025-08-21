class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = (long long)arr.size() + 1;
        long long totSum = (n*(n+1))/2;
        long long sum = 0;
        for(int i=0; i<n-1; i++) sum = sum + (long long)arr[i];
        return int(totSum - sum);
    }
};