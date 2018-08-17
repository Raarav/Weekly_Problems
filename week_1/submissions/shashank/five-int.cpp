#include <iostream>
#include "min-max.h"
int sum(int p, int q, int r, int s){
  return p+q+r+s;
}
int main() {
  int arr[5];
  for(int i = 0;i<5;i++){
    std::cout<<" number "<<i+1<<":";
  std::cin>>arr[i];
  }
  int s1,s2,s3,s4,s5;
s1 = sum(arr[0],arr[1],arr[3],arr[4]);
s2 = sum(arr[1],arr[2],arr[3],arr[4]);
s3 = sum(arr[0],arr[1],arr[2],arr[4]);
s4 = sum(arr[0],arr[2],arr[3],arr[4]);
s5 = sum(arr[0],arr[1],arr[2],arr[3]);
int a = max(s1,s2,s3,s4,s5);
int b = min(s1,s2,s3,s4,s5);
std::cout<<"📈 max sum and 📉 min sum: "<<a<<"  ";
std::cout<<b;

return 0;

}