#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <fstream> 

 string favGames[100];
  int index = 0;
    string input;
  ofstream gamelist;
   ifstream list;
string line;
  


void add (){

  cout << "what game would you like to add\n";
      cin >> input;
      favGames[index] = input;
      index++;

  
}

void show(){

 cout << "here are your favorite games:\n";

      for (int i = 0; i < index; i++) {
        cout << favGames[i] << "\n";


      }
  
}

void edit(){

 cout << "re-enter last game name\n";
      cin >> input;
      favGames[index - 1] = input;


}


void find (){
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


void Save(){
  gamelist.open("names.text");

    // use a for loop to write all of the array lines to the file.
  for(int i=0; i<index ; i++ ){

    list >>favGames[i];
  }
    
    
  gamelist.close();
}




void load() {
  list.open("list.text");
    // try to open the save file
 
if(list.is_open()) {
         
        while(getline(list, line)) {
          if( line==""){
          continue;
          }
          else {
          
            cout << line << "\n";
          }
        }
    }
    else {
        cout << "file could not be loaded.\n";
    }

    // add each line from the file to the array.
    // close the file.
   list.close();
}


void bulkadd(){
   cout << "what would you like to add\n";
  cout<< "  type quit to stop\n";
  while (input != "quit") {
       
        cin >> input;
        if (input == "quit") {
          continue; 
        }
        favGames[index] = input;
        index++;
    Save();
      }
}



    



  








int main() {

ifstream list("list.text");
  ofstream gamelist;

  load();
gamelist.open("names.text");

  
Save();



  

 while (true) {
    cout << "what would you like to do\n";
    cout << "type 'quit' to quit the game.\n";
    cout << " type 'add' to add a game. \n ";
    cout << " type 'edit' to edit last one\n";
    cout << "type 'show' to show the array of the game. \n";
    cout << " type 'bulkadd' to bulk add \n";


    cin >> input;
    if (input == "quit") {
      cout << "thanks for playing!\n";

      break;
    }

    if (input == "add") {
      add();
  
    }

    if (input == "show") {
      show();
      }

    

    if (input == "edit") {
     edit();
    }

    if (input == "find") {
find();
    }
    if (input == "bulkadd") {

    bulkadd();
    }
  }




   
  
  

}


  
