#include <iostream>
using namespace std;

int main() {
    int n,sum,t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        sum=0;
        while(t>4)
        {
            sum+=t/5;
            t=t/5;
        }
        cout<<sum<<endl;
    }
	return 0;
}
