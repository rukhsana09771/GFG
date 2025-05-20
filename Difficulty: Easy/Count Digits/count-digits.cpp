// User function Template for C++

int countDigits(int n) {
    int count = 0;
    // write your code here
    while(n>0){
        count++;
        n = n/10;
    }
    return count;
    // return number of digits in n
}