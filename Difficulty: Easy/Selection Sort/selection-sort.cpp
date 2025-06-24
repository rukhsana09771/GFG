class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            int minIdx = i;
            for(int j=i+1; j<n; j++){
                if(arr[minIdx]>arr[j]) minIdx = j;
            }
            swap(arr[i],arr[minIdx]);
        }
    }
};