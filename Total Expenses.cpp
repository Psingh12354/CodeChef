#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        int x;
	        float y;
	        cin>>x>>y;
	        (x>1000)?cout<<fixed<<setprecision(6)<<(x*y*0.9)<<endl:
	        cout<<fixed<<setprecision(6)<<x*y<<endl;
	}
	        
	return 0;
}
