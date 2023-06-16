//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long factorial(int n)
    {
        if(n==0)
          return 1;
        return n*factorial(n-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
          long long fact=1,i=2;
          vector<long long> vfact;
          while(fact<=N)
          {
              vfact.push_back(fact);
             fact=factorial(i);
             i++;
          }
          return vfact;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends