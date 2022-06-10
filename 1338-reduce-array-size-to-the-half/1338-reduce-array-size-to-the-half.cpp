class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>m;
        for(auto x:arr)
            m[x]++;
        
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]==arr[i+1]){
        //         m[arr[i]]++;
        //     }
        // }
        multimap<int,int,greater<int>>mm;
        for(auto x:m){
            mm.insert({x.second,x.first});
        }
        int n=arr.size();
        int d=n;
        int count=0;
        for(auto it:mm){
            d-=it.first;
            count++;
            if(d<=n/2)
                return count;
        }
        return count;
    }
};