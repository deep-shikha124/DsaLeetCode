class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum1,sum2=0,maxlen=-1,i=0,j=0,currsum=0;
        for(int i=0;i<n;i++){
            sum2+=nums[i];
        }
        sum1=sum2-x;
        if(sum1==0)
            return n;
        
        while(j<n){
            currsum+=nums[j++];
            while(i<j && sum1<currsum){
                currsum-=nums[i++];
        }
                    if(sum1==currsum)
                        maxlen=max(maxlen,j-i);
        }
        if(maxlen==-1)
            return -1;
        return n-maxlen;
    }
};