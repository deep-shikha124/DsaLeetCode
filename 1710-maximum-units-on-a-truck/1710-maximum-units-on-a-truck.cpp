class Solution {
public:
    static bool comp(vector<int>a,vector<int>b){
            return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int sum=0;
      sort(boxTypes.begin(),boxTypes.end(),comp);
      for(auto units:boxTypes){
          int unit=min(units[0],truckSize);
          sum+=unit*units[1];
          truckSize-=unit;
          if(truckSize==0) break;
      }
        return sum;
    }
};