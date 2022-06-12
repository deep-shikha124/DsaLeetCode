class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
      int flag=true;
      int n=arr.size();
      sort(arr.begin(),arr.end());
      for(int i=0;i<n-2;i++){
        if(arr[i+1]-arr[i]!=arr[i+2]-arr[i+1])
          flag=false;
      }
      return flag;
    }
};