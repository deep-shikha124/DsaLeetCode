class Solution {
     int MOD = 1000000007;
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        long long maxH = 0, maxV = 0, hn =  hc.size(), vn = vc.size();
        
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        
        maxH = max(hc[0], h - hc[hn - 1]);
        
        for(int i = 0; i < hn - 1; i++) {
            if((hc[i + 1] - hc[i]) > maxH)
            maxH = hc[i + 1] - hc[i];
        }
        
        maxV = max(vc[0], w - vc[vn - 1]);
        
        for(int i = 0; i < vn - 1; i++) {
            if((vc[i + 1] - vc[i]) > maxV) {
                maxV = vc[i + 1] - vc[i];
            }
        }
        
        long long ans = ((maxH%MOD) * (maxV%MOD))%MOD;
        
        return ans;
//     int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
//         sort(horizontalCuts.begin(),horizontalCuts.end());
//         sort(verticalCuts.begin(),verticalCuts.end());
        
//         horizontalCuts.push_back(h);
//         verticalCuts.push_back(w);
        
//         int L=0,B=0,mod=1e9+7;
        
//         for(int i=0;i<horizontalCuts.size();i++){
           
//             L=i==0?max(L,horizontalCuts[i]):max(L,horizontalCuts[i]-horizontalCuts[i-1]);
//         }
//         for(int i=0;i<verticalCuts.size();i++){
//             B=i==0?max(B,verticalCuts[i]):max(B,verticalCuts[i]-verticalCuts[i-1]);
//         }
//         long long int l=L,b=B;
        
        
//         long long int ans=(l*b)%mod;
//         return ans;
    }
};