class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d = d%n;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = arr[(i+d)%n];
        }
        for(int i=0; i<n; i++){
            arr[i] = ans[i];
        }
    }
};