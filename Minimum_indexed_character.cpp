// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
	string printMinIndexChar(string s, string p)
	{
	    for(int i=0;i<s.length();i++)
	        for(int j=0;j<p.length();j++){
	            if(s[i] == p[j])
	            {
	                return {s[i]};
	                j++;
	            }

	        }
	        return {"$"};
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends
