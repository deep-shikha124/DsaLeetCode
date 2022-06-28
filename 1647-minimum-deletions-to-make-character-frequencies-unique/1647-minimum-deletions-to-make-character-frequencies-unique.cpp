class Solution {
public:
    int minDeletions(string s) {
        int ans=0;
        map<char,int>m;
        for(auto &c:s){
            m[c]++;
        }
        unordered_set<int> st;
       for (auto[k, v] : m) {
       while (st.find(v) != st.end()) {
        v--;
        ans++;
     }
      if (v > 0) st.insert(v);
  }

  return ans;
}
    
};