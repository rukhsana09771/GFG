// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        int x = n;
        int rev = 0;
        int rem;
        while(x!=0){
            rem = x%10;
            rev = rev*10 + rem;
            x /= 10;
        }
        
        if(n==rev) return true;
        else return false;
    }
};