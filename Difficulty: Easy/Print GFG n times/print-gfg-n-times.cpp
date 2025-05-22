class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N==0) return;
        else{
            cout<<"GFG"<<" ";
            N = N - 1;
            printGfg(N);
        }
    }
};
