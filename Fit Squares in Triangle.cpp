#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        cin>>m;
	        int base=m/2;
	        int ans=(base*(base-1))/2;
	        cout<<ans<<"\n";
	}
	return 0;
}
