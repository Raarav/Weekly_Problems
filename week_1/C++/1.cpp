#include<iostream>
#include<cstdlib>// cmath can also be used

using namespace std;

int main(){

int matrix[3][3]={{1,2,9},{2,3,4},{4,5,6}}; // assuming this is the given matrix

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
