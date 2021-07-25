// NEED TO FINISH

#include <iostream>
#include <vector>

using namespace std;
int main() {
  
  int num;
  int num_words;
  
  cout << "Please enter how many words will"
       << " you ask me to look at: ";
  cin >> num;
  cout << endl;
  
  cout << "Please enter the " << num << " word(s) you want"
       << " me to parse (put space btwn each word): ";
  for (int i = 0; i < num_words; ++i) {
    cin >> user_input;
    inputWords.push_back(userInout);
  }
  
  
  
  
  return 0;
}

/*
 Prompt user for num of words
 Prompt user for words
 Loop
  save input
  add words to data struct
 Prompt user for char to search for
 Save input
 Loop
  output each word that has char
    iterate through vector
    if you find a word with the char
    output word found
  set found char
 If no words w/ char is found, notify user
 */
