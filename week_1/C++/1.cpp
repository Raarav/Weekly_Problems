#include<iostream>
#include<math.h>

using namespace std;

int main(){

int matrix[][]={{1,2,3},{2,3,4},{4,5,6}}; // assuming this is the given matrix

//TODO: if needed input the matrix from user
int firstD=0, secondD=0;

for(int i=0; i<3; i++)
{

firstD=firstD+matrix[i][i];
secondD=secondD+matrix[i][2-i];

}

cout<<"absolute difference of the diagonals"<<abs(firstD-secondD);

return 0;
}
