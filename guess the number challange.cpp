
#include <iostream>
using namespace std;

char y;
int x;

int main() 
{
    cout << "This is the program to guess the number:  " << endl;
    
    do {
        cout << "Do you want to run the game (y/n)?" << endl;
        cin >> y;
        
        if(y == 'y' || y == 'Y') {
            cout << "Guess the number in range 1 to 20: ";
            cin >> x;
  
            if(x == 12) {
                cout << "Correct! That's the number." << endl;
            }
            else if(x >= 17) {
                cout << "Too far." << endl;
            }
            else if(x <= 9) {
                cout << "Too far." << endl;
            }
            else if(x >= 13) {
                cout << "Very close." << endl;
            }
        } 
        else { 
            cout << "Do you want to close the program  (y/n)?" << endl;
          
            cin>>y;
            
            if(y=='y' || y == 'Y') 
                cout << "Closing the program.\nThanks for playing this game." << endl;
                
                else
                cout<<"Restarting.........\n";
            
        }
    } while(y == 'n' || y == 'N');
    
    return 0;
}


