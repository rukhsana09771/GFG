class Solution {
  public:
    // Complete this function
    int k=1;
    void printNos(int n) {
        // Your code here
        if(n==0) return;
        else{
            cout<<k++<<" ";
            n = n-1;
            printNos(n);
        }
    }
};