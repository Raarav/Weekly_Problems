#include<stdio.h>
#include<cstdlib>// cmath can also be used

int main(){

int matrix[3][3]={{1,2,9},{2,3,4},{4,5,6}}; // assuming this is the given matrix

//TODO: if needed input the matrix from user
int firstD=0, secondD=0;
int i=0;
for( i=0; i<3; i++) // to do change the constant 3 with size of matrix
{

firstD=firstD+matrix[i][i];
secondD=secondD+matrix[i][2-i]; // change 2 with number of column-1

}
printf("sum of first diagonal is %d",firstD);
printf("\n sum of second diagonal is %d",secondD);
printf("\nabsolute difference of the diagonals %d",abs(firstD-secondD));

return 0;
}
