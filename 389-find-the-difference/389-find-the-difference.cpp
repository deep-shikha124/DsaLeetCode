class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // stack<char>st;
        // int i=0;
        // while(i<t.size()){
        //     st.push(t[i++]);
        // }
        // for(int i=0;i<s.size();i++){
        //     if(s[i]==st.top()) st.pop();
        // }
        // return st.top();---->wrong answer on some hidden test cases
        
        int sum1=0;
        int sum2=t[s.size()];
        for(int i=0;i<s.size();i++){
            sum1+=s[i];
            sum2+=t[i];
        }
        return abs(sum2-sum1);
    }
};