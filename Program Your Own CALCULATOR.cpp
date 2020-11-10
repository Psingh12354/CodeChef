#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	double a,b;
	char c;
	cin>>a>>b;
	cin>>c;
	if(c=='+')
	{
	        cout<<fixed<<setprecision(6)<<a+b;
	}
	if(c=='-')
	{
	        cout<<fixed<<setprecision(6)<<a-b;
	}
	if(c=='*')
	{
	        cout<<fixed<<setprecision(6)<<a*b;
	}
	if(c=='/')
	{
	        cout<<fixed<<setprecision(6)<<a/b;
	}
	
	return 0;
}
