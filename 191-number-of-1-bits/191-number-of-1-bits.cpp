class Solution {
public:
    int hammingWeight(uint32_t n) {
         int f=1;int count=0;
        while(n>0){
            
            int s=n&f;
            if(s>0) count++;
            n=n>>1;
        }
        return count;
    }
};