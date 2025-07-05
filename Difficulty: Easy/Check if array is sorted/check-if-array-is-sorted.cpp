class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        int count = 0;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i]>arr[i+1]) count++;
        }
        if(count==0) return true;
        else return false;
    }
};