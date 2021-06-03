// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

 // } Driver Code Ends

class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
 int t = n;
    int count = 1;
    
    while(t>0)
    {
        if((t%10) == 0)
        {
            n+= (count*5);            
        }
        t = t/10;    
        count = count*10;
    }
    
    return n;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}  // } Driver Code Ends
