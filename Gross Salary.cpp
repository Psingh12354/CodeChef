#include <iostream>
using namespace std;
#include <iomanip>
int main() {
        int n;
        float GS,BS,HR,DA;
        cin>>n;
        for(int i=0;i<n;i++)
        {
             cin>>BS;
             if(BS<1500)
             {
                     HR=BS/10;
                     DA=BS*9/10;
                     GS=BS+HR+DA;
             }
             else
             {
                     HR=500;
                     DA=BS*98/100;
                     GS=BS+HR+DA;
             }
             cout<<fixed<<setprecision(2)<<GS<<endl;
                     
        }
	// your code goes here
	return 0;
}
