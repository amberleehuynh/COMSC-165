/*
Amberlee Huynh
ID: 1788355
Lab 2: Using Vectors
2/23/2020
Xcode, macOS, Version 11.3.1, Clang
*/
 
#include <iostream>
#include <vector>    // Function needed for vectors

using namespace std;
int main() {
  
  // Variables
  const int NUM_PLAYERS = 12;
  vector<double> weights(NUM_PLAYERS);
  int i;
  double total_weight;
  double average_weight;
  double max_weight;
  
  for (i = 0; i < NUM_PLAYERS; ++i) {
    cout << "Enter weight " << i + 1 << ":\n";
    cin >> weights.at(i);
  }
  
  cout << "You entered: ";
  for (i = 0; i < NUM_PLAYERS; ++i) {
    cout << weights.at(i) << " ";
  }
  cout << endl;
  
  total_weight = 0;
  cout << endl << "Total weight: ";
  for (i = 0; i < NUM_PLAYERS; ++i) {
    total_weight += weights.at(i);
  }
  cout << total_weight << endl;
  
  average_weight = total_weight / NUM_PLAYERS;
  cout << "Average weight: " << average_weight << endl;
  
  max_weight = 0;
  for (i = 0; i < NUM_PLAYERS; ++i) {
    if (weights.at(i) > max_weight) {
      max_weight = weights.at(i);
    }
  }
  cout << "Max weight: " << max_weight << endl;
  
  return 0;
}
