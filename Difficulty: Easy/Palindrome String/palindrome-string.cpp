class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        bool  flag = false;
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else return  false;
        }
        return true;
    }
};