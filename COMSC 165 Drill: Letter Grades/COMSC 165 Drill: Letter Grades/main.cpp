//
//  main.cpp
//  COMSC 165 Drill: Letter Grades
//
//  Created by Amberlee Huynh on 2/12/20.
//  Copyright © 2020 Amberlee Huynh. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
  // Variables
  double grade = 0.0;
  
  cout << "Please enter the percentage "
       << "and I will tell you the letter grade: ";
  cin >> grade;
  if (grade >= 60 && grade < 70)
    cout << "Thank you. " << grade << " is a D.\n";
  else if (grade >= 70 && grade < 80)
    cout << "Thank you. " << grade << " is a C.\n";
  else if (grade >= 80 && grade < 90)
    cout << "Thank you. " << grade << " is a B.\n";
  else if (grade >= 90 && grade < 100)
    cout << "Thank you. " << grade << " is an A.\n";
  else
    cout << "Thank you. " << grade << " is an F.\n";
  
  return 0;
}
