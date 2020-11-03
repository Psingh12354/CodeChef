#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,count=0;
	cin>>n;
	(n%4==0)?cout<<++n:cout<<--n;
	return 0;
}
