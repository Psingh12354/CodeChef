#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        cin>>a>>b>>c>>d;
(a==b==c==d || (a==b && c==d) || (a==d && c==b) || (a==c && d==b ))?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
