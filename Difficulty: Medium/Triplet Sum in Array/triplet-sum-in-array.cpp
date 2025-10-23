class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i=0; i<n-2; i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum<target) j++;
                else if(sum>target) k--;
                else return true;
            }
        }
        return false;
    }
};