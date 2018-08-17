#include<iostream>
#include<cstdlib>// cmath can also be used

using namespace std;

int main(){

int order;
cout<<"enter the order of the matix";
cin>>order;

int** matrix = new int*[order];

for (int i = 0; i < order; ++i)
    matrix[i] = new int[order];

for(int i=0;i<order;i++){
    for(int j=0;j<order;j++){
        cin>>matrix[i][j];
    }
}


//TODO: if needed input the matrix from user
int firstD=0, secondD=0;

for(int  i=0; i<order; i++)
{

firstD=firstD+matrix[i][i];
secondD=secondD+matrix[i][order-1-i];

}
cout<<"sum of first diagonal is "<<firstD;
cout<<"\n sum of second diagonal is "<<secondD;
cout<<"\nabsolute difference of the diagonals "<<abs(firstD-secondD);

return 0;
}
