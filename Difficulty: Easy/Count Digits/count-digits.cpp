class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int count = 0;
        int y = n;
        while(n>0){
            int x = n%10;
            n = n/10;
            if(x!=0 && y%x==0) count++;
        }
        return count;
    }
};