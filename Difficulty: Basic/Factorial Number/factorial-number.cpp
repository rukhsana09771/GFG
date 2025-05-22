class Solution {
  public:
    int isFactorial(int N) {
        // code here
        int i=1, fact=1;
        while(fact<N){
            i++;
            fact = fact*i;
        }
        if(fact==N) return 1;
        else return 0;
    }
};