class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        if(n<=2) return -1;
        int fmax = INT_MIN;
        int smax = INT_MIN;
        int tmax = INT_MIN;
        
        for(int i=0; i<n; i++){
            if(arr[i]>fmax){
                tmax = smax;
                smax = fmax;
                fmax = arr[i];
            }else if(arr[i]>smax){
                tmax = smax;
                smax = arr[i];
            }else if(arr[i]>tmax){
                tmax = arr[i];
            }
        }
        return tmax;
    }
};