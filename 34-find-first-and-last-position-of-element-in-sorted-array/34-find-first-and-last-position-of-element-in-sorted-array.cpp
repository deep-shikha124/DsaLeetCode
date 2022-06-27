class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int start=0,end=nums.size()-1,res=-1;
        // vector<int>ans;
        // while(start<=end)
        // {
        //     int mid=start+(end-start)/2;
        //     if(nums[mid]==target)
        //     {
        //         res=mid;
        //         end=mid-1;
        //     }
        //     else if(target<nums[mid])
        //         end=mid-1;
        //     else
        //         start=mid+1;   
        // }
        // ans.push_back(res);
        // start=0,end=nums.size()-1,res=-1;
        // while(start<=end)
        // {
        //     int mid=start+(end-start)/2;
        //     if(nums[mid]==target)
        //     {
        //         res=mid;
        //         start=mid+1;
        //     }
        //     else if(target<nums[mid])
        //         end=mid-1;
        //     else
        //         start=mid+1;   
        // }
        // ans.push_back(res);
        // return ans;

       int l=0,r=nums.size()-1,res=-1;
        vector<int>ans;
       
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                res=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else r=mid-1;
        }
        ans.push_back(res);
        l=0,r=nums.size()-1;
        res=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                res=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else r=mid-1;
        }
        ans.push_back(res);
       return ans; 
    }
};