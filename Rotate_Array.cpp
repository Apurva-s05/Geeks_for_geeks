#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;         //Number of testcases
    
    for(int i=0;i<t;i++){
	int n;
	cin>>n;           //Size of array
	
	int arr[n];
	int d;          //Number size of the rotation
	cin>>d;
		for(int j=0;j<n;j++)
	    {
	        cin >> arr[j];
	    }
	
    	for(int i=0;i<n;i++)
    	{
	    cout<<arr[(i+d)%n]<<" ";
    	}
	cout<<endl;
    }
    
	return 0;
}
