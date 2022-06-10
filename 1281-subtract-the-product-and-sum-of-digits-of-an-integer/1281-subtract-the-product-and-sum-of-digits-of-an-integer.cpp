class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit;
        double pdt=1;
        double sum=0;
        while(n>0){
            
            digit=n%10;
            pdt=pdt*digit;
            sum=sum+digit;
            n=n/10;
            digit=n;
        }
        
        return (pdt-sum);
    }
};