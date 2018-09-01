#include <iostream>
using namespace std;
int main() {
  char a[] = "minameidrhuv";
  char c[1];
  int i = 0;
  int flag;
  int vflag = 0;
  int cflag = 0;
  int noVob=0;
  int size = sizeof(a)/(sizeof(a[0]));
  while(i<(size)){
    if((vflag ==0) && ((a[i]=='a')|| a[i]=='i'  || a[i]=='o' || a[i]=='u' || a[i]=='v'))
    {
     if(i == (size-2)){
       flag = 2;
       break;
     }
    }
    else if((a[i]!='a'|| a[i]!='i'  || a[i]!='o' || a[i] !='u' || a[i]!='v') && a[i] !='n' ){
   noVob =1;

    }
    else if(a[i]=='n'){
      if(i == (size-2)){
       flag = 2;
       break;
     }
    }
    else if(cflag ==0 && a[i] !='n' && noVob ==0){
      if(i == (size-2)){
       flag = 2;
       break;
     }
    }
    else{
      flag =0;
      break;
    }
    i++;
  }
  // cout<< size;
  if(flag==2){
    cout<<"yes";
  }
 else{
   cout<< "no";
 }
}