//
//  main.cpp
//  COMSC 165 Drill: Tips
//
//  Created by Amberlee Huynh on 2/12/20.
//  Copyright © 2020 Amberlee Huynh. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
  double total_bill = 0.0;
  double liquor = 0.0;
  double tip = 0.0;
  int service;
  
  cout << "Enter the total bill: ";
  cin >> total_bill;
  cout << "Enter the liquor charge: ";
  cin >> liquor;
  cout << "Was your service 1) excellent 2) good 3) poor: ";
  cin >> service;
  
  if (service == 1) {
    tip = (total_bill - liquor) * 0.20;
    cout << "Tip: $" << tip << endl;;
  }
  else if (service == 2) {
    tip = (total_bill - liquor) * 0.15;
    cout << "Tip: $" << tip << endl;
  }
  else if (service == 3) {
    tip = (total_bill - liquor) * 0.10;
    cout << "Tip: $" << tip << endl;
  }
  
  return 0;
}
