//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        
    //   long long sod=0;
    //   for(int i=1;i<=N;i++)     // O(N^2)
    //   {
    //      long long sum=0;
    //   for(int j=1;j<=i;j++)
    //   {
    //     if(i%j==0)
    //       sum=sum+j;
    //   }
    //   sod=sod+sum;
    //   }
    //   return sod;
        
    long long ans=0;
    for(int i=1;i<=N;i++)
    {
        ans+=i*(N/i);
    }
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends