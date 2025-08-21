class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int cone = 0, czero = 0;
        int mx1 = 0, mx2 = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1){
                cone++;
                mx1 = max(mx1, cone);
            }else cone = 0;
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0){
                czero++;
                mx2 = max(mx2, czero);
            }else czero = 0;
        }
        return max(mx1, mx2);
    }
};