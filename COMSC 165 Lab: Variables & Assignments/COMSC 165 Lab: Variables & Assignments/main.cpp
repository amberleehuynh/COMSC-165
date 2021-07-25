/*
Amberlee Huynh
ID: 1788355
Lab 1: Variables and Assignments
2/9/2020
Xcode, macOS, Version 11.3.1, Clang
*/

#include <iostream>
#include <cmath> // Function needed for line 34 round()

using namespace std;
int main()
{
  // Variables
  int area;
  int cans;
  double height;
  double width;
  double paint;
  const double GALLONS = 350;
    
  cout << "Enter wall height (feet): ";
  cin >> height;
  cout << "Enter wall width (feet): ";
  cin >> width;
    
  area = height * width;
  cout << "Wall area: " << area << " square feet" << endl;
    
  paint = area / GALLONS;
  cout << "Paint needed: " << paint << " gallons" << endl;
    
  cans = round(area / GALLONS);
  cout << "Cans needed: " << cans << " can(s)" << endl;

  return 0;
}
