#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        int A,B,C,sum=0;
	        cin>>A>>B>>C;
	        sum=A+B+C;
	        sum==180?cout<<"YES":cout<<"NO";
	        cout<<"\n";
	}
	return 0;
}
