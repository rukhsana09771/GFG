/* 
// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        int lo = 0, hi = n-1;
        while(lo<hi){
            int mid = lo + (hi-lo)/2;
            if(mid%2==1) mid--;
            if(arr[mid]==arr[mid+1]) lo=mid+2;
            else hi=mid;
        }
        return arr[lo];
    }
};
// T.C = O(log(n))
*/


//method-2
class Solution {
  public:
    int search(int n, int arr[]) {
        int xorr = 0;
        for(int i=0; i<n; i++) xorr ^= arr[i];
        return xorr;
    }
};
 