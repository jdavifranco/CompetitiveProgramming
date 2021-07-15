class Solution {
public:
    int climbStairs(int n) {
        int f1=1, f2=1;
        int fib=0;
        int i=2;
        if(n==1 || n==0) return 1;
        while(i<=n){
            fib=f1+f2;
            f1=f2;
            f2=fib;
            i++;
        }
        return fib;
    }
};