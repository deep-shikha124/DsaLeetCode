// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <fstream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
// You need to complete this function


class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long fib(long long number){
         long long dp[number+1];
            dp[1]=1;
            dp[2]=1;
      
            for(long long i=3;i<=number;i++){
                dp[i]=dp[i-1]+dp[i-2];
            }
        return dp[number];
    }
    long long findNthFibonacci(int number)
    {
        // Your Code Here
        return fib(number);
        
       
    }
};

// { Driver Code Starts.

int main()
 {
    //taking testcases
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        //taking nth fibonacci 
        //to be found
        int number;
        cin>>number;
        
        //calling function findNthFibonacci()
        //and passing number as parameter
        Solution obj;
        cout<<obj.findNthFibonacci(number)<<endl;
    }
    
	return 0;
}
  // } Driver Code Ends