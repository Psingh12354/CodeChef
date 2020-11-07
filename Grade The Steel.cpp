#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	        int H,T;
	        float C;
	        cin>>H>>C>>T;
	        if(H>50 && C<0.7 && T>5600)
                {
                        cout<<"10\n";
                }
                else
                if(H>50 && C<0.7)
                {
                        cout<<"9\n";
                }
                else
                if(C<0.7 && T>5600)
                {
                        cout<<"8\n";
                }
                else
                if(H>50 && T>5600)
                {
                        cout<<"7\n";
                }
                else
                if(H>50 || C<0.7 || T>5600)
                {
                        cout<<"6\n";
                }
                else
                {
                        cout<<"5\n";
                }
	}
	return 0;
}
