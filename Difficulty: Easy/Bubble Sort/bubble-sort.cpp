// Function to sort the array using bubble sort algorithm.
/*
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            int count = 0;
            for(int j=0; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    count++;
                } 
            }
            if(count==0) break;
        }
    }
};
*/


// Recursive Bubble Sort
class Solution {
  public:
    void recursiveBubble(vector<int>& arr, int n){
    if(n==1) return;
    int count = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
            count++;
        } 
    }
    if(count==0) return;
    recursiveBubble(arr, n-1);
}
void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        recursiveBubble(arr, n);
    }
};
