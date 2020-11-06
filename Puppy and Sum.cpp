#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,sum;
	cin>>n;
	while(n--)
	{
	        int x,y;
	        cin>>x>>y;
	        sum=0;
	        while(x--)
	        {
	                sum=y*(y+1)/2;
	                y=sum;
	        }
	        cout<<sum<<endl;
	        
	}
	return 0;
}
