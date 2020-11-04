// 1
#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		char b;
		cin >> b;
		if(b=='b' || b=='B')
			cout << "BattleShip" << endl;
		else if(b=='c' || b=='C')
			cout << "Cruiser" << endl;
		else if(b=='d' || b=='D')
			cout << "Destroyer" << endl;
		else if(b=='f' || b=='F')
			cout << "Frigate" << endl;
	}
}

// 2
#include <iostream>
using namespace std;

int main() {
        int n;
        char p;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            if(p=='B' || p=='b'){
                    cout<<"BattleShip\n";
            }else
            if(p=='C' || p=='c'){
                    cout<<"Cruiser\n";
            }else
            if(p=='D' || p=='d'){
                    cout<<"Destroyer\n";
            }else
            if(p=='F' || p=='f'){
                    cout<<"Frigate\n";
            }
            
        }
	// your code goes here
	return 0;
}


