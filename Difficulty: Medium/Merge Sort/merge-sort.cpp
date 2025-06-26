class Solution {
  public:
    void merge(vector<int>& arr, int lo, int mid, int hi){
        int st = lo;
        int end = mid+1;
        vector<int> temp;
        while(st<=mid && end<=hi){
            if(arr[st]<=arr[end]){
                temp.push_back(arr[st]);
                st++;
            }else{
                temp.push_back(arr[end]);
                end++;
            }
        }
        while(st<=mid){
            temp.push_back(arr[st]);
            st++;
        }
        while(end<=hi){
            temp.push_back(arr[end]);
            end++;
        }
        for(int i=lo; i<=hi; i++){
            arr[i] = temp[i-lo];
        }
    }
    
    void mergeSort(vector<int>& arr, int lo, int hi) {
        // code here
        if(lo==hi) return;
        int mid = lo + (hi - lo)/2;
        mergeSort(arr, lo, mid);
        mergeSort(arr, mid+1, hi);
        merge(arr, lo, mid, hi);
    }
};