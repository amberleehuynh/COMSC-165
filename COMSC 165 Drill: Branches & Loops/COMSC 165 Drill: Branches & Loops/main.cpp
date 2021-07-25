//
//  main.cpp
//  COMSC 165 Drill: Branches & Loops
//
//  Created by Amberlee Huynh on 2/12/20.
//  Copyright © 2020 Amberlee Huynh. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
  int num = 0;
  int ten_thousand = 0;
  int thousand = 0;
  int tens = 0;
  int ones = 0;
  
  cout << "Enter a five digit integer: ";
  cin >> num;
  
  ten_thousand = num / 10000;
  thousand = num % 10000 / 1000;
  tens = num % 100 / 10;
  ones = num % 10;
  
  // Palindrome check
  cout << ten_thousand << " " << thousand << " " << tens << " " << ones << "\n";
  if (ten_thousand == ones && thousand == tens) {
    cout << num << " is a palindrome.\n";
  }
  else {
    cout << num << " is not a palindrome.\n";
  }

  return 0;
}
