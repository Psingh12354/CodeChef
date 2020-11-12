#include <iostream>
using namespace std;
int gcd(int l,int b)
{
    if(l==b)
    return l;
    if(l>b)
    return gcd(l-b,b);
    else
    return gcd(l,b-l);
}
int main() {
	// your code goes here
	int n,l,b,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        cin>>l>>b;
	        s=gcd(l,b);
	        cout<<(l*b)/(s*s)<<endl;
	}
	return 0;
}
