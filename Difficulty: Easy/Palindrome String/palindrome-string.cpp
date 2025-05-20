class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int n = s.size() - 1;
        for(int i=0; i<n; i++){
            if(s[i]!=s[n]) return false;
            n = n-1;
        }
        return true;
    }
};