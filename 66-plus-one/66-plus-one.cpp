class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
//         int n=digits.size();
//         vector<int>ans;
//         int get=0;
//         for(int i=0;i<n;i++){
//             get+=digits[i]*pow(10,n-1-i);
//         }
//         int finall=get+1;
        
//         for(int j=0;j<n+1;j++){
        
//         ans.insert(ans.end()-j,(finall%10));
//         finall=(finall/10);
//     }
        
//     return ans;
        
         for(int i = digits.size()-1;i >= 0;i--){
            if(digits[i] != 9){
                digits[i]++;
                return digits;
            }
            else
                digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};