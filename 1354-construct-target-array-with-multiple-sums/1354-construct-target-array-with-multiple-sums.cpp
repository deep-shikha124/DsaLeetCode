class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> p;
        long long sum = 0;
        for(auto i : target){
            p.push(i);
            sum+=i;
        }
        while(p.top() != 1){
            sum -= p.top();
            if(sum == 0 || sum >= p.top()) return false;
            int prev = p.top()%sum;
            if(sum != 1 && prev == 0) return false;
            p.pop();
            p.push(prev);
            sum += (prev);
        }
        return true;
    }
};