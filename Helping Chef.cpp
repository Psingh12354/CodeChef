#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n,N;
	cin>>n;
        for(int i=0;i<n;i++)
        {
                cin>>N;
                if(N<10){
                    cout<<"Thanks for helping Chef!"<<endl;
                    
                }
                else {
                    cout<<"-1"<<endl;
                }
        }
	return 0;
}
