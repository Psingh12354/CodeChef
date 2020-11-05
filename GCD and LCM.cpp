#include <iostream>
using namespace std;
int gcd(int a, int b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main() {
	// your code goes here
	long int a,b,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        cin>>a>>b;
	        int x=gcd(a,b);
	        cout<<x<<" "<<((a*b)/x)<<endl;
	}
	
	return 0;
}
