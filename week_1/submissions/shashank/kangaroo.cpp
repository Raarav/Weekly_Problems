#include <iostream>

using namespace std;
int x1, v1, x2, v2,n1,n2;
// WHICH KANGAROO CAN WIN LONG JUMP?
void IAmKangaroo(){
    
  cout<<" KANGAROO 1: "<<endl;
  cout<<"Starting point: ";
  cin>>x1;
  cout<<"distance per jump:";
  cin>>v1;
  cout<<" KANGAROO 2: "<<endl;
  cout<<"Starting point: ";
  cin>>x2;
  cout<<"distance per jump:";
  cin>>v2;

}

void Kangaroo(){
  cout<<"Jumps done by Kangaroo 1: "<<endl;
  cin>>n1;
  cout<<"Jumps done by Kangaroo 2: "<<endl;
  cin>>n2;
  if(x1+(v1*n1)== x2+(v2*n2)){
    cout<<"Yes! Both of them met.";
  }
  else{
    cout<<"Fuck! They got seperated.";
  }
}


int main() {
IAmKangaroo();//function to enter data for both kangaroos
Kangaroo();
  return 0;
}