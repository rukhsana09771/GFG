class Solution {
  public:
    bool isPalindrome(int n) {
        int num = n, rev = 0;
        while(n>0){
            int rem = n%10;
            rev = rev*10 + rem;
            n /= 10;
        }
        return rev==num;
    }
};