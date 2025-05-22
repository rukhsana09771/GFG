
class Solution {
  public:
    int sum = 0;
    int seriesSum(int n) {
        // code here
        if(n==0) return sum;
        else{
            sum = sum + n;
            n = n-1;
            seriesSum(n);
        }
    }
};
