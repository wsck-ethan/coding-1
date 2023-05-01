#include <iostream>
#include <fstream>
#include <string>
using namespace std;



class charator {

public:
  string name;
  string catchphrase;
  int id;
  
  



charator (string n, string givenCatch, int givenID){
  name = n;
  catchphrase= givenCatch;
  id = givenID;

  
}
charator (){

  
}









};


charator charator[100];
int index=0;


void load (){
ifstream file("characters.csv");
string line;

  if (file.is_open()){
while (getline(file,line)){
  cout<< "the first comma is character #"<< line.find(",")<<".\n";
    cout<<line<< "\n";
cout<< "name is "<< line. substr(0,line.find(","))<< "\n";


  // find the first comma 
  int comma= line.find (",";)
  // save the name 
  string name=line.substr(0,comma);
  // erase the name and the comma
  line.erase(0,comma+1);

  cout<< "line is now "<< line << "\n";
  // find the second comma 
  comma=line.find(",");
  // find the id number
  int id= stoi(line. substr(0, comma)) ;
  //erase the id number and the comma...
  line.erase(0,comma+1);
  cout<<"ID="<< id << ".\n";
}
   
  }
  
}

void save(){





  
}


void show(){



  
}

int main() {

load();
  
  std::cout << "Hello World!\n";
}