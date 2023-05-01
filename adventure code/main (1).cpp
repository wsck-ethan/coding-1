#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int health = 30;

int totalTreasure = 0;

int rollDie(int sides = 6, int min = 1) {
  return rand() % sides + min;

} // end of if

void story() {
  cout << "Opening a Door you See The Glowing Sun\n";

} // end of story void

void adventure() {

  while (health > 0) { // checking the health
    cout << "You have " << health << " health \n Do you Adventure? \n (y/n) \n";
    char input;
    cin >> input;

    if (input != 'y') {
      return;

    } // end of if
    cout << "lets adventure\n";
    int attack;
    int block;

    int amountOfTreasure = rand() % 20 + 1;

    attack = rollDie();
    block = rollDie();

    if (attack > block) {
      cout << "Defences to Low"
           << " you lost " << attack << " health\n";
      health -= attack;
      if (health > 0) {
        cout << "You have " << totalTreasure << " Treasure\n";
      }

    } // end of if
    else {
      cout << "You Won\n";
      totalTreasure += amountOfTreasure;
      cout << "You have " << totalTreasure << " Treasure!!\n";

    } // end of else

  } // end of while in adventure void
} // end of adventure void

void ending() {

  if (health == 0) {
    cout << "You have died\n";

  }
  else {

    cout << " you return home with " << totalTreasure << " Treasure and " << health
         << " Health \n";
  }
}

int main() {
  srand(time(0));

  story();
  adventure();
  ending();
}