// *** NEED TO FINISH ***
#include <iostream>

using namespace std;
int main() {
  
  // Average and max scores
  
  const int SIZE = 35;
  double scores[SIZE];
  double average = 0.0;
  double max = 0.0;
  int i;
  
  for (int i = 0; i < SIZE; i++)
    cout << "Quiz score #" << i + 1 << ": " << endl;
    cin >> scores[i];
      if (max < scores[i]) {
        max = scores[i];
      }
  
  average = average / SIZE;
  cout << "Average sscore: " << average << endl;
  cout << "Max score: " << max << endl;
  
  
  return 0;
}
