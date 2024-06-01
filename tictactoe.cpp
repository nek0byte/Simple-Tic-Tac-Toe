#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
int choice, row, column;
char turn = 'X', replay;
bool draw = false;

void display(){
    cout << "\tPLAYER 1 [X] || PLAYER 2 [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"   |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"   |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"   |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}

void player_turn(){
    while (true) {
        if (turn == 'X') {
            cout << "\n\tPlayer 1 [X] turn : ";
        } else if (turn == 'O') {
            cout << "\n\tPlayer 2 [O] turn : ";
        }

    cin >> choice;
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move\n";
            continue;
    }

    if (board[row][column] != 'X' && board[row][column] != 'O') {
            board[row][column] = turn;
            turn = (turn == 'X') ? 'O' : 'X';
            break;
        } else {
            cout << "Box already filled!!!\n\n";
        }
    }
}

bool is_winner(){
    for(int i = 0; i < 3; i++){
        if((board[i][0] == board[i][1] && board[i][0] == board[i][2]) || 
          (board[0][i] == board[1][i] && board[0][i] == board[2][i])){
            return true;
        }
    }

    if((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || 
       (board[0][2] == board[1][1] && board[0][2] == board[2][0])){
        return true;
    }
    return false;
}

bool is_draw(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}
               
bool gameover() {
    if (is_winner()) {
        return false;
    }
    if (is_draw()) {
        draw = true;
        return false;
    }
    return true;
}

void resetBoard() {
    char initialBoard[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = initialBoard[i][j];
    turn = 'X';
    draw = false;
}

int main(){
    cout << "\t  >>> TIC TAC TOE <<<\n";
    do{
        resetBoard();
        while(gameover()){
            display();
            player_turn();
            system("cls");
        }

        display();

        if (!draw) {
            if (turn == 'O') {
                cout << "Player 'X' is the winner!!!\n";
            } else {
                cout << "Player 'O' is the winner!!!\n";
            }
        } else {
            cout << "Game Draw!!!\n";
        }
        cout << "Do you want to play again? (y/n): ";
        cin >> replay;

    } while (replay == 'y' || replay == 'Y');
    
    return 0;
}