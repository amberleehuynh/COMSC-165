/*
Amberlee Huynh
ID: 1788355
Lab 3: Functions
3/8/2020
Xcode, macOS, Version 11.3.1, Clang
*/

#include <iostream>

using namespace std;
int maximum (int, int, int);
int minimum (int, int, int);

int main() {
  int x = 0, y = 0, z = 0;
  cout << "Enter 3 integers: ";
  cin >> x >> y >> z;
  cout << "The maximum number is: "
       << maximum(x, y, z) << endl;
  cout << "The minimum number is: "
       << minimum(x, y, z) << endl;
  return 0;
}

int maximum (int x, int y, int z)
{
  if (x > y && x > z) {
    return x;
  }
  else if (y > x && y > z) {
    return y;
  }
  else if (z > x && z > y) {
    return z;
  }
  return 0; 
}

int minimum (int x, int y, int z)
{
  if (x < y && x < z) {
    return x;
  }
  else if (y < x && y < z) {
    return y;
  }
  else if (z < x && z < y) {
    return z;
  }
  return 0;
}
  


