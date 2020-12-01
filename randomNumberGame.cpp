#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int player1=0;
    int player2=0;
    string userChoice1;
    string userChoice2;
    string playerName[2];

    srand(time(0));
    int randomNum1 = (rand()%8 +1);
    int randomNum2 = (rand()%8 +1);

    cout<<"Enter your name, player one: ";
    cin>>playerName[0];
    cout<<"Enter your name, player two: ";
    cin>>playerName[1];

    cout<<" Ready check, type yes, no otherwise but game ends \n";
    cout<<playerName[0]<<" ,make your decsion.\n";
    cin>>userChoice1;
    cout<<playerName[1]<<" ,make your decsion.\n";
    cin>>userChoice2;

    if (userChoice1 =="yes" && userChoice2=="yes")
    {
        player1=randomNum1;
        player2=randomNum2;

        if (player1>player2)
        {
            cout<<playerName[0]<<" ,rolled: "<<player1<<endl;
            cout<<playerName[1]<<" ,rolled: "<<player2<<endl;
            cout << playerName[0]<<" , you won!";
        }else if (player1<player2)
        {
            cout<<playerName[0]<<" ,rolled: "<<player1<<endl;
            cout<<playerName[1]<<" ,rolled: "<<player2<<endl;
            cout << playerName[1]<<" , you won!";
        }else
        {
            cout<<playerName[0]<<" ,rolled: "<<player1<<endl;
            cout<<playerName[1]<<" ,rolled: "<<player2<<endl;
            cout<<"Draw!";
        }
        
        
        
    }else
    {
        cout<<"Bye";
    }
    
    return 0;

    
}