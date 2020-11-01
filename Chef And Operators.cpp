#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,A,B;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        cin>>A>>B;
	        if(A>B)
	        cout<<">\n";
	        else
	        if(A<B)
	        cout<<"<\n";
	        else
	        cout<<"=\n";
	}
	return 0;
}
