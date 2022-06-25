class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        int start=0,end=x;
        while(start<=end){
            int mid=(start+end)/2;
            if(x/mid==mid) return mid;
            else if(x/mid<mid) end=mid-1;
            else start=mid+1;
        }
        return end;
    }
};