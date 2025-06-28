/*
class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for(int i=1; i<n; i++){
            int key = arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>key){
               arr[j+1] = arr[j];
               j--;
            }
            arr[j+1] = key;
        }
    }
};
*/


// Recursive Insertion Sort
class Solution {
  public:
    void recursiveInsertion(vector<int>& arr, int i, int n){
            if(i==n) return;
            int key = arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>key){
               arr[j+1] = arr[j];
               j--;
            }
            arr[j+1] = key;
            recursiveInsertion(arr, i+1, n);
    }
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        recursiveInsertion(arr, 0, n);
    }
};