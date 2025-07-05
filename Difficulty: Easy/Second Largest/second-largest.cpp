class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if(arr.size()==1) return 0;
        int max = arr[0];
        for(int i=1; i<arr.size(); i++){
            if(max<arr[i]) max = arr[i];
        }
        int secMax = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>secMax && arr[i]!=max) secMax = arr[i];
        }
        
        return secMax;
    }
};