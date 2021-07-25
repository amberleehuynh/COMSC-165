// NEED TO FINISH

#include <iostream>

using namespace std;
int main() {
  
  /*
  cout << "1" << " " << "2" << " " << "3" << endl;
  cout << "4" << " " << "5" << " " << "6" << endl;
  cout << "7" << " " << "8" << " " << "9" << endl;
  */
  
  char board[3][3] = { '1', '2', '3',
                       '4', '5', '6',
                       '7', '8', '9' };
  char player = 'x'
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  
    while (1) {
      
      int num;
      cout << "Press the number in the board where"
           << " you would like to move: ";
      cin >> num;
      // MOVE
      if (num == 1) {
        matrix[0]][0] = player;
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
          }
          cout << endl;
        }
      }
      // After move happens, toggle player
      if (player == 'x')
        player = 'o';
      else
        player = 'x';
      break;
    }
  
  
  for (int i = 4; i < 6; i++) {
    for (int j = 4; j < 6; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  
  for (int i = 7; i < 9; i++) {
    for (int j = 7; j < 9; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}

/*
Make a move
Loop
  Prompt user for where he/she would like to move save inout
  Check to see if input == 1
    if so write player char to 0,0
  Check to see if input == 2
    if so write player char to 0,1
  Etc
 
 Toggle player and loop
 */

