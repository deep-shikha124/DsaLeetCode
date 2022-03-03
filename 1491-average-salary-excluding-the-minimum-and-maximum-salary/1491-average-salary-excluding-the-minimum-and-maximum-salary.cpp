class Solution {
public:
    double average(vector<int>& salary) {
        //vector<int>v;
        //v=salary;
        double n=salary.size();
        sort(salary.begin(),salary.end());
        double sum=0.00000;
        for(int i=0;i<n;i++){
            sum+=salary[i];
        }
        //double ans=sum-(salary[0]+salary[n-1]);
        double ans=(sum-(salary[0]+salary[n-1]))/(n-2);
        //n=n-2;
        return ans;
    }
};