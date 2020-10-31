#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        int fact=1;
	        cin>>num;
	        for(int j=1;j<=num;j++)
	        {
	                fact*=j;
	        }
	        cout<<fact<<endl;
	}
	return 0;
}
