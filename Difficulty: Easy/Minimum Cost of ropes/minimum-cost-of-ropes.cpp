class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n<=1) return 0;
        int minCost = 0;
        priority_queue<int, vector<int>, greater<int> > pq; 
        for(int i=0; i<n; i++){
            pq.push(arr[i]); 
        }
        while(pq.size()>1){
                int x = pq.top(); pq.pop();
                int y = pq.top(); pq.pop();
                pq.push(x+y);
                minCost += (x+y);
            }
        return minCost;
    }
};