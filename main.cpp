#include <iostream>
using namespace std;
int n;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';

void Draw()
{
    system("cls");
    cout << "\nTic Tac Toe" << endl;
    for(int i =0; i<3; i++)
    {
        for ( int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // adding a new line. After it prints out first line then it wil
                    // - add new line then print second row.
        
    }
}

void input()
{
    int num;
    cout << "It's " << player<< " turn. " << "Press the number of field: ";
    cin >> num;

    if (num==1)
    {
        if (matrix[0][0] == '1')
            matrix[0][0] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    }
    
    else if (num == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    }
    else if (num == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    }

    if (num==4)
    {
        if (matrix[1][0] == '4')
            matrix[1][0] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    }
    else if (num == 5)
    {
        if (matrix[1][1] == '5')                                
            matrix[1][1] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    }
    else if (num == 6)
    {
        if (matrix[1][2] == '6')
            matrix[1][2] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    }

    if (num==7)
    {
        if (matrix[2][0] == '7')
            matrix[2][0] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    }
    else if (num == 8)
    {
        if (matrix[2][1] == '8')
            matrix[2][1] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    }
    else if (num == 9)
    {
        if (matrix[2][2] == '9')
            matrix[2][2] = player;
        else
        {
            cout << "Field is occupied." << endl;
            input(); // otehrwise it doesn't print out the string for some reason
        }
    } 
    
}

char Win()
{
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
        return 'X';

//second player O
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')

        return 'O';
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
        return 'O';

    return '/'; // has to return something
}

void togglePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';    
}

int main()
{
    n=0;
    Draw();
    while (1)
    {
        n++;
        input();
        Draw();
        if (Win() == 'X')
        {
            cout << "\nX wins! ";
            break;
        }
        else if (Win() == 'O')
        {
            cout << "\nO wins! ";
            break;
        }
        else if (Win() == '/' && n==9)
        {
            cout << "Draw!" <<endl;
            break;
        }
        
        
        
        togglePlayer();
    }
    system("pause");
    return 0;
} 