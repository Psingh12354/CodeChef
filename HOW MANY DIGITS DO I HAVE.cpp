#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k=0;
	cin>>n;
	while(n>0)
	{
	    n/=10;
	    k++;
	}
        if(k>3)
	    cout<<"More than 3 digits"<<endl;
	else
	    cout<<k<<endl;
	return 0;
}
