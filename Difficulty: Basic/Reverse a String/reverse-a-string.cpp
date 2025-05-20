// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.size() - 1;
        string str = "";
        for(int i=n; i>=0; i--){
            str = str + s[i];
        }
        return str;
    }
};
