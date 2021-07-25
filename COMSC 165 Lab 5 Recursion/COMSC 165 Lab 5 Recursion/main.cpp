/*
Amberlee Huynh
ID: 1788355
Lab 5: Recursion
4/26/2020
Xcode, macOS, Version 11.3.1, Clang
*/

#include <iostream>

using namespace std;

void Search(int low, int high) {
  int midpoint;                   // The # btwn low & high #
  char answer;
  
  midpoint = (low + high) / 2;
  cout << "Is the number " << midpoint
       << "? (Choose +,-, or yes): ";
  cin >> answer;
  
  if ((answer != '+') && (answer != '-')) {    // Base case: # is found
    cout << "The number is found!" << endl;
  }
  else {                                       // Recursive case: Split into lower/ upper 1/2
    if (answer == '-') {                       // Guess the lower 1/2 of the #s
      Search(low, midpoint);                   // Recursive call
    }
    else {                                     // Guess the upper 1/2 of the #s
      Search(midpoint + 1, high);              // Recursive call
    }
  }
  return;
}

int main()
{
  cout << "I would like you to guess a number from"
       << " 0 to 50!" << endl;
  cout << "Answer accordingly: " << endl;
  cout << "\t + (if your number is higher)" << endl;
  cout << "\t - (if your number is lower)" << endl;
  cout << "\t yes (if the guess is correct)" << endl;
  cout << endl;
  
  Search(0, 50);     // Call recursive funct to search #

  return 0;
}
