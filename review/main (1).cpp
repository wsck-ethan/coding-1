#include <iostream>
#include <string>
#include <fstream>
using namespace std;




string people[100];
int index=0;




// getline is a part of <string>
// getline has 2 inputs parameters (gettting lines from where, putting the lines here)



void show (){
for (int i =0; i<index; i++){
  if (people [i]==""){
    continue;
  }

  
cout<< people[i]<<".\n";
  
}

  
}



void remove(){

cout<< "what name would you likes to remove?\n";
  string input;
  getline(cin,input);

  for(int i =0; i<index; i++){
    if (people [i] == input){
cout<< "i have found it! I am removing the name..\n";
      people[i]="";
      
    }
  }
    


  
}

int main() {
  std::cout << "Hello World!\n";

string input;

  cout<< "whats is your name?\n";
  getline(cin, input);    // does the same as "cin>> input";

  cout<< " nice  to meet you " << input<<".\n";

  cout<< " loading people...\n";

  ifstream file ("save.txt");

  if(file.is_open()){
  while (getline(file, input)){
    people [index++]= input;
// if ++index then it makes it 1 and then adds 
    
  }


  }
  show();

remove();



  
}