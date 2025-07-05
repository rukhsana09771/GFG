class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max = -1;
        if(arr.size()==1) return arr[0];
        for(int i=0; i<arr.size(); i++){
            if(max<arr[i]) max = arr[i];
        }
        return max;
    }
};
