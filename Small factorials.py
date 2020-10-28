# Python
a=int(input())
for i in range(0,a):
    n=int(input())
    fact=1
    while n>=1:
        fact=fact*n
        n-=1
    print(fact)
  
# Cpp error in this need to fix
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N,fact=1;
	    cin>>N;
	    while(N>0)
		{
			fact*=N;
			N--;
		}
		cout<<fact<<endl;
	}
	return 0;
}
