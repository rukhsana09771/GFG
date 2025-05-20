// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        int num = n;
        int rev = 0;
        while(n>0){
            int rem = n%10;
            rev = rev*10 + rem;
            n /= 10;
        }
        if(num==rev) return true;
        else return false;
    }
};