#include<stdio.h>
#include<stdlib.h>// cmath can also be used

int main(){

int matrix[50][50]; // assuming this is the given matrix

//TODO: if needed input the matrix from user
int firstD=0, secondD=0;
int i=0,j=0,order;

printf("enter the order of the matrix;(max limit is 50) ");
scanf("%d",&order);

for(i=0;i<order;i++){
    for(j=0;j<order;j++){
        scanf("%d",&matrix[i][j]);
    }
}

for( i=0; i<order; i++) // to do change the constant 3 with size of matrix
{

firstD=firstD+matrix[i][i];
secondD=secondD+matrix[i][order-i-1]; // change 2 with number of column-1

}
printf("sum of first diagonal is %d",firstD);
printf("\n sum of second diagonal is %d",secondD);
printf("\nabsolute difference of the diagonals %d",abs(firstD-secondD));

return 0;
}
