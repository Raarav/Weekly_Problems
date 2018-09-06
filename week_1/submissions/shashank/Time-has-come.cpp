#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void error(int hr, int min, int sec){
  if(hr>12||min>60 || sec>60)
  cout<<"Learn time formats.";
    exit(0);
}


int main() {
  string mode;
  int hr,min,sec;
  cin>>hr>>min>>sec;
error(hr,min,sec);
  cout<<"⌛⏲ Time in 12 hr format:";
  cout<<hr<<":"<<min<<":"<<sec<<endl;
  cout<<"choose am or pm:";
  cin>>mode;

  if(mode=="am" || mode=="AM" || mode=="Am"){
    if(hr==12){
      hr=0;

    }
cout<<"⌚⏳ Time in 24 hr format:\n";
    cout<<hr<<":"<<min<<":"<<sec<<endl;
  }
  else if(mode =="pm" || mode=="PM" || mode=="Pm"){
        if(hr==12){
            cout<<"⌚⏳ Time in 24 hr format:\n";
    cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
        else{
            hr+= 12;
    cout<<" ⌚⏳ Time in 24 hr format:\n";
    cout<<hr<<":"<<min<<":"<<sec<<endl;
        }

  }
  cout<<"⏳ Time to end the execution.";
  return 0;
}

