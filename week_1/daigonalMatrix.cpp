
#include <iostream>

using namespace std;

int main()
{   int x,k,i,j,c,d;
    cout<<"finding the absoulte diff of square of diagnals of 2 square matrix"<< "\n";
    cout<<"enter the dimenson of square matrix"<<"\n";
    cin >> x;
    
    int a[x][x];
    int b[x][x];
    for ( i=0; i<x;i++){
        for( j=0; j<x; j++){
            k = k+1;
            a[i][j]=k;
            k = k+1;
            b[i][j] = k;
        }
    }
    cout<<"this is our 1 st matrix"<<"\n";
    for( i = 0; i<x;i++){
        for( j = 0; j<x;j++){
          cout<<a[i][i]<<"\t";
        }
        cout<<"\n";
    }
        cout<<"this is our 2nd matrix"<<"\n";
    for( i = 0; i<x;i++){
        for( j = 0; j<x;j++){
          cout<<b[i][i]<<"\t";
        }
        cout<<"\n";
    }
    cout<< "here v go ------"<<"\n";
    for( i =0 ; i<x;i++){
        for( j=0; j<x;j++){
            if(i == j){
                c = (a[i][j])*a[i][j];
                d = (b[i][j])*b[i][j];
                if ((c-d)<0){
                    cout<< -(c-d)<<"\n";
                }
                else{
                cout<<c-d<<"\n";
                }
            }
        }
    }
    

    return 0;
} 
