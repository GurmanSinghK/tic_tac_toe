#include <iostream>
using namespace std;

class Player
{
    int score;
    public:
        string name;

    Player()
    {
        score=0;
    }

    void SetName(string a)
    {
        name=a;
    }
    
    void SetScore(int n)
    {
        score=score+n;
    }

    void getPlayerDetail()
    {
        cout<<"Player name: "<<name<<endl;
        cout<<"Player score: "<<score<<endl;
    }
};

class Game
{
    char board[3][3];
    Player p1;
    Player p2;

    public:

        Game(string n1, string n2)
        {
            p1.name=n1;
            p2.name=n2;

            for (int i=0;i<3;i++)
            {
                for (int j=0;j<3;j++)
                {
                    board[i][j]='-';
                }
            }
        }


        void displayBoard()
        {
            for(int i =0;i<3;i++)
                {
                    for(int j = 0;j<3;j++)
                {
                    cout<<board[i][j]<<"\t";
                }
                cout<<endl; 
                }
        }

        void clearBoard()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    board[i][j] = '-';
                }
            }
        }


        void startGame();
        bool checkWinner();
};




bool Game::checkWinner()
{
    if (board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X')
    {
        cout<<p1.name<<" is the winner "<<endl;
        p1.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if(board[0][0]=='O' && board[0][1]=='O' && board[0][2]=='O')
    {
        cout<<p2.name<<" is the winner "<<endl;
        p2.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X')
    {
        cout<<p1.name<<" is the winner "<<endl;
        p1.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if(board[1][0]=='O' && board[1][1]=='O' && board[1][2]=='O')
    {
        cout<<p2.name<<" is the winner "<<endl;
        p2.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X')
    {
        cout<<p1.name<<" is the winner "<<endl;
        p1.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if(board[2][0]=='O' && board[2][1]=='O' && board[2][2]=='O')
    {
        cout<<p2.name<<" is the winner "<<endl;
        p2.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X')
    {
        cout<<p1.name<<" is the winner "<<endl;
        p1.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][0]=='O' && board[1][0]=='O' && board[2][0]=='O')
    {
        cout<<p2.name<<" is the winner "<<endl;
        p2.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X')
    {
        cout<<p1.name<<" is the winner "<<endl;
        p1.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][1]=='O' && board[1][1]=='O' && board[2][1]=='O')
    {
        cout<<p2.name<<" is the winner "<<endl;
        p2.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X')
    {
        cout<<p1.name<<" is the winner "<<endl;
        p1.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][2]=='O' && board[1][2]=='O' && board[2][2]=='O')
    {
        cout<<p2.name<<" is the winner "<<endl;
        p2.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X')
    {
        cout<<p1.name<<" is the winner "<<endl;
        p1.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O')
    {
        cout<<p2.name<<" is the winner "<<endl;
        p2.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X')
    {
        cout<<p1.name<<" is the winner "<<endl;
        p1.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }

    else if (board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O')
    {
        cout<<p2.name<<" is the winner "<<endl;
        p2.SetScore(1);
        p1.getPlayerDetail();
        p2.getPlayerDetail();
        clearBoard();
        return true;
    }
    return false;
}

void Game::startGame()
{
    bool chance = true;
    int count = 0;
    int r=0;
    int c = 0;

    while (count<9)
    {
        
        if (chance==true)
        {
            cout<<p1.name<<" chance"<<endl;
            cout<<"Enter the row and column where you want to place X: "<<endl;
            cin>>r>>c;

            if (r>=0 && c>=0 && r<3 && c<3 && board[r][c]=='-')
            {
                board[r][c]='X';
                count++;
                chance=false;
                displayBoard();
            }

            else
            {
                cout<<"Please enter valid row and column"<<endl;
            }
        }

        else
        {
            cout<<p2.name<<" chance"<<endl;
            cout<<"Enter the row and column where you want to place O: "<<endl;
            cin>>r>>c;

            if (r>=0 && c>=0 && r<3 && c<3 && board[r][c]=='-')
            {
                board[r][c]='O';
                count++;
                chance=true;
                displayBoard();
            }

            else
            {
                cout<<"Please enter valid row and column"<<endl;
            }

        }
        if (checkWinner()==true)
        {
            return;
        }
    }
    if (count == 9) {
    cout << "The game is a draw!" << endl;
    clearBoard();
    p1.getPlayerDetail();
    p2.getPlayerDetail();
}
}


int main()
{
    string n1,n2;
    bool flag=true;
    int n;
    
    cout<<"Enter name of player 1: ";
    cin>>n1;

    cout<<"Enter name of player 2: ";
    cin>>n2;

    Game tic(n1,n2);

    do
    {
        tic.startGame();
        cout<<"Press 1 to play again"<<endl<<"Press 0 to end the game"<<endl;
        cin>>n;
    }while(n==1);
}   
