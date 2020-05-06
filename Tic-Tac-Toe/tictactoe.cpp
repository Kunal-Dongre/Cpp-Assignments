
#include <iostream>
using namespace std;

char board[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
            int choice,player;
			int checkForWin();
void display();
void markboard(char symbol);
class tictactoe
{
    public: 
    int checkForWin()
    {
        
        int returnValue = 0;
    
        if (board[1] == board[2] && board[2] == board[3])
        {
            returnValue = 1;
        }
        else if (board[4] == board[5] && board[5] == board[6])
            returnValue = 1;
    
        else if (board[7] == board[8] && board[8] == board[9])
            returnValue = 1;
    
        else if (board[1] == board[4] && board[4] == board[7])
            returnValue = 1;
    
        else if (board[2] == board[5] && board[5] == board[8])
            returnValue = 1;
    
        else if (board[3] == board[6] && board[6] == board[9])
            returnValue = 1;
    
        else if (board[1] == board[5] && board[5] == board[9])
            returnValue = 1;
    
        else if (board[3] == board[5] && board[5] == board[7])
            returnValue = 1;
    
        else if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
            board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7]
            != '7' && board[8] != '8' && board[9] != '9')
            returnValue = 0;
        else
            returnValue = -1;
    
        return returnValue;
    }
    
    void display()
    {
        
        cout<<"\n\tTic Tac Toe"<<endl;
    
        cout<<"Player 1 (X)  -  Player 2 (O)"<<endl;
    
        cout<<"     |     |     "<<endl;
        cout<<"  "<<board[1]<<"  |  "<<board[2]<<"  |  "<<board[3]<<endl;
    
        cout<<"_____|_____|_____"<<endl;
        cout<<"     |     |     "<<endl;
    
        cout<<"  "<<board[4]<<"  |  "<<board[5]<<"  |  "<<board[6]<<endl;
    
        cout<<"_____|_____|_____"<<endl;
        cout<<"     |     |     "<<endl;
    
        cout<<"  "<<board[7]<<"  |  "<<board[8]<<"  |  "<<board[9]<<endl;
    
        cout<<"     |     |     "<<endl;
    }
    
    void markboard(char symbol)
    {
        if (choice == 1 && board[1] == '1')
            board[1] = symbol;
    
        else if (choice == 2 && board[2] == '2')
            board[2] = symbol;
    
        else if (choice == 3 && board[3] == '3')
            board[3] = symbol;
    
        else if (choice == 4 && board[4] == '4')
            board[4] = symbol;
    
        else if (choice == 5 && board[5] == '5')
            board[5] = symbol;
    
        else if (choice == 6 && board[6] == '6')
            board[6] = symbol;
    
        else if (choice == 7 && board[7] == '7')
            board[7] = symbol;
    
        else if (choice == 8 && board[8] == '8')
            board[8] = symbol;
    
        else if (choice == 9 && board[9] == '9')
            board[9] = symbol;
        else
        {
            cout<<"Invalid move "<<endl;
    
            player--;
            cin.clear();
			cin.ignore();
            
        }
    }
};


int main()
{
    tictactoe t;
    int gameStatus;

    char symbol;

    player = 1;

    do
    {
      t.display();

      
      player = (player % 2) ? 1 : 2;

      
      cout<<"Player "<<player<<", enter a number: "<<endl;
      cin>>choice;

      
      symbol = (player == 1) ? 'X' : 'O';

      
      t.markboard(symbol);

      gameStatus = t.checkForWin();
		if(gameStatus==-1)
		{
      player++;
		}
		else
			continue;

    }while (gameStatus == -1);

    if (gameStatus == 1)
        cout<<"==>Player "<<player<<" win "<<endl;
    else
        cout<<"Game draw"<<endl;
		t.display();

    return 0;
}

