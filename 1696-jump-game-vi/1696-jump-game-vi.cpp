class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
	vector<int>v(nums.size());
	v[0] = nums[0];
	deque<int> q{0};
	for(int i = 1; i < size(nums); i++) {
		if(q.front() < i - k) q.pop_front();            
		v[i] = nums[i] + v[q.front()];             
		while(!q.empty() && v[q.back()] <= v[i])   
		    q.pop_back();
		q.push_back(i);     
	}
	return v.back();
    }
};