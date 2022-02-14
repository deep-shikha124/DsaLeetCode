#include <iostream>
#include<vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1];
        for(int i=0;i<n;i++ ){
            cin>>arr[i];
        }	
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(arr[n-i-1]);
            cout<<v[i]<<" ";
        }
        cout<<endl;
	}
	    return 0;
}