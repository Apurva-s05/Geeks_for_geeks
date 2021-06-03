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
        // Amount to be added
    int result = 0;
 
    // Unit decimal place
    int decimalPlace = 1;
     
    if (n == 0)
    {
        result += (5 * decimalPlace);
    }
 
    while (n > 0)
    {
        if (n % 10 == 0)
        {
             
            // A number divisible by 10, then
            // this is a zero occurrence in
            // the input
            result += (5 * decimalPlace);
 
        }
         
        // Move one decimal place
        n /= 10;
        decimalPlace *= 10;
    }
    return result;
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
