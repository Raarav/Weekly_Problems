#include<iostream>

using namespace std;

int main()
{
 int  h,m,s;
 string t,AM,PM;
 cout<<"enter hour"<<endl;
 cin>>h;
 cout<<"enter min."<<endl;
 cin>>m;
 cout<<"enter sec."<<endl;
 cin>>s;
 cout<<"PM or AM"<<endl;
 cin>>t;
 if(t==AM)
 {
  cout<<h<<":"<<m<<":"<<s<<t;
 }
 else if(t==PM)
 {
     cout<<12+h<<":"<<m<<":"<<s<<t;
 }
 else
 {
     cout<<"This format does not exist";
 }

}
