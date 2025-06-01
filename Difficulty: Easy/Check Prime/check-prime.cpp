// User function Template for C++

bool prime(int n) {

    // Write your code here
    // code here
        if(n==1) return false;
        for(int i=2; i<=n-1; i++){
            if(n%i==0) return false;
        }
        return true;
    // returns a boolean value
}