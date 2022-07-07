class Solution {
public:
    int dp[101][101];
    bool helper(string& s1, string& s2, string& s3, int i, int j, int k, int& n1, int& n2, int& n3) {        
        if(k==n3){
            if(i<n1 || j<n2)
                return false;
            return true;
        }
        if(dp[i][j] != -1)
            return dp[i][j];
        if(s1[i] == s3[k] && s2[j] == s3[k]) {
            return dp[i][j]=(helper(s1,s2,s3,i+1,j,k+1,n1,n2,n3) || helper(s1,s2,s3,i,j+1,k+1,n1,n2,n3));
        }
        else if(s1[i] == s3[k])
            return helper(s1,s2,s3,i+1,j,k+1,n1,n2,n3);
        else if(s2[j] == s3[k])
            return helper(s1,s2,s3,i,j+1,k+1,n1,n2,n3);
        return false;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size(), n2=s2.size(), n3=s3.size();
        if(n1+n2 != n3)
            return false;
        memset(dp,-1,sizeof(dp));
        return helper(s1,s2,s3,0,0,0,n1,n2,n3);
    }
};