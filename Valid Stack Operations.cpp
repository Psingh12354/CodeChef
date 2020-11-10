#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
        while(n--)
	{
	        int a,sum=0,sum1=0,flag=0;
	        cin>>a;
	        int arr[a];
	        for(int j=0;j<a;j++)
	        {
	                cin>>arr[j];
	                arr[j]==1?sum++:sum1++;
	                if(sum<sum1)
	                {
	                        flag=1;
	                }
	        }
	        flag==0?cout<<"Valid\n":cout<<"Invalid\n";
	}
	return 0;
}
