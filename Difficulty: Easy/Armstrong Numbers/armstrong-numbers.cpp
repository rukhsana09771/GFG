// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum = 0;
        int x = n;
        while(n>0){
            int r = n%10;
            sum += r*r*r;
            n /= 10;
        }
        if(sum==x) return true;
        else return false;
    }
};