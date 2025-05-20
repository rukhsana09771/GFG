// User function Template for C++

class Solution {
  public:
    // Complete this function
    int countDigits(int n) {
        // Your code here
        int count = 0;
        while(n>0){
            count++;
            n = n/10;
        }
        return count;
    }
};