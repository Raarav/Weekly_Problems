#include <iostream>
#include <math.h>
using namespace std;

int main() {
int arr[10][10],n,i,j,principal = 0,secondary = 0,diff;
// FOR SIZE OF MATRIX
cout<<"Size of square matirx: 👉";
cin>>n;
// FOR INPUTTING THE ELEMENTS IN MATRIX
cout<<"Now Enter the elements:👇 ";
for( i = 0 ; i<n;i++){
  for ( j = 0; j<n; j++) {
   cin >>arr[i][j];
  }
}

// FOR PRINTING MATRIX

for( i = 0 ; i<n;i++){
  cout<<"\n";
  for ( j = 0; j<n; j++) {
    cout<<arr[i][j];
    cout<<"    ";
  }
}
// FOR FINDING SUM OF PRINCIPAL DIAGONAL ELEMENTS
for( i = 0 ; i<n;i++){
  
  for ( j = 0; j<n; j++) {
  if(i==j){
  principal+= arr[i][j];
}
  }
}

// FOR FINDING SUM OF PRINCIPAL DIAGONAL ELEMENTS
for( i = 0 ; i<n;i++){
  
  for ( j = 0; j<n; j++) {
  if(i+j == n-1){
  secondary+= arr[i][j];
}
  }
}
cout<<"\n\nsum of principal diagonal elements is: "<<principal<<endl;
cout<<"\nsum of secondary diagonal elements is: "<<secondary<<endl;

diff = abs(principal-secondary);
cout<<"\n\ndifference : "<<diff;
cout<<"DONE ✔😎";
}