#include<iostream>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    while(t){
        cin >> a >> b;
        int sum, reminder, sticks = 0;
        sum = a + b;
        while(sum!=0){
            reminder = sum%10;
        
            if(reminder==1){
                sticks = sticks + 2;
            }else if(reminder==7){
                sticks = sticks + 3;
            }else if(reminder==4){
                sticks = sticks + 4;
            }else if(reminder==2 || reminder==3 || reminder==5){
                sticks = sticks + 5;
            }else if(reminder==0 || reminder==6 || reminder==9){
                sticks = sticks + 6;
            }else if(reminder==8){
                sticks = sticks + 7;
            }
        
            sum = sum/10;
        }
        cout << sticks <<endl;
        t = t-1;
    }

    return 0;
}
