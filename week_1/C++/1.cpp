#include<iostream>
#include<cstdlib>// cmath can also be used

using namespace std;

int main(){

int matrix[3][3]; // assuming this is the given matrix
int order;
cout<<"enter the order of the matix";
cin>>order;

//TODO: if needed input the matrix from user
int firstD=0, secondD=0;

for(int i=0; i<3; i++)
{

firstD=firstD+matrix[i][i];
secondD=secondD+matrix[i][2-i];

}
cout<<"sum of first diagonal is "<<firstD;
cout<<"\n sum of second diagonal is "<<secondD;
cout<<"\nabsolute difference of the diagonals "<<abs(firstD-secondD);

return 0;
}
