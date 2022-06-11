class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index=-1,sum=INT_MAX;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x || points[i][1]==y){
                int dist=abs(points[i][0]-x)+abs(points[i][1]-y);
                if(dist<sum){
                    sum=dist;
                    index=i;
                }
            }
        }
        return index;
    }
};