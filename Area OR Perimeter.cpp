#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	if( a>0 && a<=1000 && b>0 && b<=1000)
	{
	int area=a*b;
	int peri=2*(a+b);
	if(area == peri)
        {
            cout<<"Eq\n" ;
            cout<<peri ;
        }
        else
	area>peri?cout<<"Area\n"<<area:cout<<"Peri\n"<<peri;
	}
	return 0;
}
