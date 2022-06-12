class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      if(s1==s2)
        return true;
      int cnt=0 ;
      
      vector<int>v;
      for(int i=0;i<s1.size();i++){
         if(s1[i]!=s2[i]){
           cnt++;
           v.push_back(i);
         }
       }
      if(cnt!=2){
        return false;
        
      }
      if(cnt==2){
        swap(s1[v[0]],s1[v[1]]);
      }
        if(s1==s2)
          return true;
        return false;
    }
};