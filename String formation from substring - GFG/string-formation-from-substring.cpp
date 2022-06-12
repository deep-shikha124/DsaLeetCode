// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int>ff(string w) {	
	int i = 0, j = 1, m = w.size();

    vector<int>v(m);

    v[0] = 0;
    while (j < m)

    if (w[i] == w[j])

    i++, v[j++] = i;

    else if (i == 0)

    v[j++] = 0;

    else
    i = v[i - 1];
    return v;
    }

int isRepeat(string s) {

    int n = s.size(); 

            auto v = ff(s);

            int len = v.back();

            return len > 0 and n % (n - len) == 0;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends