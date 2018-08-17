#include <iostream>

using namespace std;

int main()
{
  int t,m,s;
  string f;
  cout<<"Enter the hours: ";
  cin>>t;
  cout<<"Enter the minutes: ";
  cin>>m;
  cout<<"Enter the seconds: ";
  cin>>s;
  cout<<"Enter am or pm: ";
  cin>>f;
  cout<<"Time in 12 hour format ";
  cout<<t<<":"<<m<<":"<<s<<" "<<f<<endl;
  if(f=="pm" || f=="PM"){
    t=t+12;
    cout<<"Time in military format ";
    cout<<t<<":"<<m<<":"<<s;
  }

return 0;
}
