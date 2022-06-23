class Solution {
public:
    int climbStairs(int n) {
        int prev1=1,prev2=2,sum;
        if(n<=2) return n;
        while(n>2){
            sum=prev1+prev2;
            prev1=prev2;
            prev2=sum;
            n--;
        }
        return sum;
    }
};