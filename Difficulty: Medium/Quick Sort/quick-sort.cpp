class Solution {
  public:
  
  void swap(vector<int>& arr, int i, int j){
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
  }
  
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int lo, int hi) {
        if(lo>=hi) return;
        int pi = partition(arr, lo, hi);
        quickSort(arr, lo, pi-1);
        quickSort(arr, pi+1, hi);
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int lo, int hi) {
        int pivot = arr[hi];
        int i = lo -1;
        for(int j=lo; j<hi; j++){
            if(arr[j]<pivot){
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i+1, hi);
        return i+1;
    }
};