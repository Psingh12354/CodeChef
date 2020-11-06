#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,sum;
	cin>>n;
	while(n--)
	{
	        int x,y;
	        cin>>x>>y;
	        sum=0;
	        while(x--)
	        {
	                sum=y*(y+1)/2;
	                y=sum;
	        }
	        cout<<sum<<endl;
	        
	}
	return 0;
}

// Or

#include<iostream>
using namespace std;
int Sum(int x,int y)
{
        int sum;
        sum=0;
	for(int i=1;i<=(x*y);i++)
	{
		sum+=i;
	}
	cout<<sum<<endl;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		Sum(x,y);
	}
}
