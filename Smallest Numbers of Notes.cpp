#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t,count;
	int arr[6]={100,50,10,5,2,1};
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        cin>>t;
	        count=0;
	        while(t>0)
	        {
	                for(int j=0;j<6;j++)
	                {
	                        count+=t/arr[j];
	                        t%=arr[j];
	                }
	        }
	        
	        cout<<count<<endl;
	        
	}
	return 0;
}
