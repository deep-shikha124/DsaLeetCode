class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i=2;i<cost.size();i++){
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[size(cost)-1],cost[size(cost)-2]);
    }
};