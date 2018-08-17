#include <iostream>
#include <string>
using namespace std;
int main() {
  string mode;
  int hr,min,sec;
  cin>>hr>>min>>sec;
  cout<<"Time in 12 hr format:";
  cout<<hr<<":"<<min<<":"<<sec<<endl;
  cout<<"choose am or pm:";
  cin>>mode;

  if(mode=="am" || mode=="AM"){
    if(hr==12){
      hr=0;

    }
cout<<"Time in 24 hr format:\n";
    cout<<hr<<":"<<min<<":"<<sec<<endl;
  }
  else if(mode =="pm" || mode=="PM"){
        if(hr==12){
            cout<<"Time in 24 hr format:\n";
    cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
        else{
            hr+= 12;
    cout<<"Time in 24 hr format:\n";
    cout<<hr<<":"<<min<<":"<<sec<<endl;
        }

  }
  return 0;
}
