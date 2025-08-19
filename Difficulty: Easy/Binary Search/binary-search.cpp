class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int lo = 0, hi = n-1, ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==k){
                ans = mid;
                hi = mid -1;
            }
            else if(arr[mid]<k) lo = mid+1;
            else hi = mid-1;
        }
        return ans;
    }
};