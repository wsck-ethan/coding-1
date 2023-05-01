#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(0));

  for (int counter = 0; counter < 10; counter += 1) {

    cout << rand() % 6 + 1 << "\n";
    // % reminder that maxes it out under the number like  6, 0-5 unless you add
    // 1 then it would go to 1-6
  }

  cout << "7/3 =" << 7 / 3 << "r" << 7 % 3 << "\n";

  int seedCount = 10;

  while (seedCount > 0) {
    cout << "i have " << seedCount << " seeds\n";
    seedCount -= 1; // or seedCount--
    cout << "i walked 3 feet \n";
    cout << "I planted seed \n";
  }

  // when while is false it continues with the program.

  for (int seedcount = 10; seedCount > 0; seedCount -= 1) {

    seedCount -= 1; // or seedCount--
    cout << "i walked 3 feet \n";
    cout << "I planted seed \n";
    cout << "i have " << seedCount << " seeds\n";
  }

  cout << "\n\n\n";
  while (true) {
    cout << "press q to quit.\n";

    char input;
    cin >> input;

    if (input == 'q' || 'Q') {
      break; // get out of loop

      // " " for string
      //'' char
    }
  }

  // an arry is a variable that holds other variables
  //  it can only hold one kind of variables at a time..

  string favGames[100]; // creating an array of the type string
                        //  named 'favGames' with a size of 100.
  int index = 0;

  while (true) {
    cout << "what would you like to do\n";
    cout << "type 'quit' to quit the game.\n";
    cout << " type 'add' to add a game. \n ";
    cout << " type 'edit' to edit last one\n";
    cout << "type 'show' to show the array of the game. \n";
    cout << " type 'bulkadd' to bulk add \n";

    string input;
    cin >> input;
    if (input == "quit") {
      cout << "thanks for playing!\n";

      break;
    }

    if (input == "add") {
      cout << "what game would you like to add\n";
      cin >> input;
      favGames[index] = input;
      index++; // make the index point at the next spot in the array or written
               // as  index+=1;
    }

    if (input == "show") {
      cout << "here are your favorite games:\n";

      for (int i = 0; i < index; i++) {
        cout << favGames[i] << "\n";
      }

    } // end of show if

    if (input == "edit") {
      cout << "re-enter last game name\n";
      cin >> input;
      favGames[index - 1] = input;
    }

    if (input == "find") {
      cout << "what game would you like to edit?\n";
      cin >> input;
      for (int i = 0; i < index; i++) {
        if (favGames[i] == input) {
          cout << "re-enter last game name\n";
          favGames[index - 1] = input;
          cout << "found it";
          cin >> input;
          favGames[i] = input;
        }
      }
    }
    if (input == "bulkadd") {

      while (input != "quit") {
        cout << " what would you like to add\n";
        cin >> input;
        if (input == "quit") {
          continue; // break; just breaks out of the loop your in and sinces were in a loop in a loop it would break one loop
        }
        favGames[index] = input;
        index++;
      }
    }
  }

  // make the index point at the next spot in the array or written as  index+=1;
}

// homework add bulk add feuture
// loop to add games until they type quit
