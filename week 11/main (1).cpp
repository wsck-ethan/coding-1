#include <iostream>

#include <cstdlib>
#include <ctime>
using namespace std;
string refinedLevel[5];


class rock {
public:
int rocktype;
int shine;



rock(){
  
  cout<< " found rock\n";
  rocktype= rand()% 5; 
shine= rand()% 5;   
  status();
  shouldIKeepGoing();
}

rock (int givenrocktype, int givenShine){
cout<< "getting rock\n";
shine=givenShine;
  rocktype=givenrocktype;
status();
shouldIKeepGoing();
}
void status(){
cout<< "The Shine is "<< shine << " The Rock Type is "<< refinedLevel[rocktype]<< "\n";

}



void shouldIKeepGoing(){
  if (rocktype==0){
cout<<" you should stop mining only dirt from here on out ";

    
  }
    else {
cout<< "keep going theirs more valuables ";
      
    }
  
  
}



  
};


void mining (){
  char input;
for (int i=0; i<10; i++ ){
  rock();
cout<< "do you keep going (y/n)\n";
  cin>>input;
  if (input=='n'){
 break;
    
  }
   
    
}

  

  
}






  int main() {
srand(time(0));
    
    refinedLevel[0] = "Dirt";
    refinedLevel[1] = "Graphite";
    refinedLevel[2] = "Aluminom";
    refinedLevel[3] = "Iron ";
    refinedLevel[4] = "Dimoind ";

    cout << "Hello World!\n";

rock steel(3,1);

rock(); 
mining();


    
  }