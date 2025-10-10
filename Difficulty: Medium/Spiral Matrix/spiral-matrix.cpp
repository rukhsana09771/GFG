class Solution {

  public:
    int findK(vector<vector<int>> &mat, int n, int m, int k) {
        int left = 0, right = m-1;
        int top = 0, bottom = n-1;
        int count=0;
        
        while(top<=bottom && left<=right){
            
            for(int i=left; i<=right; i++){
                count++;
                if(count==k) return mat[top][i];
            }
            top++;    
                
            for(int i=top; i<=bottom; i++){ 
                count++;
                if(count==k) return mat[i][right];
            }
            right--;
            
            if(top<=bottom){
            for(int i=right; i>=left; i--){ 
               count++;
               if(count==k) return mat[bottom][i];  
            }
            }
            bottom--;
            
            if(left<=right){
            for(int i=bottom; i>=top; i--){
                count++;
                if(count==k) return mat[i][left];
            }
            }
            left++;
        }
        return -1;
    }
};