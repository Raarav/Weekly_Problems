
#include <iostream>

using namespace std;

int main()
{   int x,k,i,j,l=0,op=0;
    cout<<"finding the absoulte diff of square of diagnals of 2 square matrix"<< "\n";
    cout<<"enter the dimenson of square matrix"<<"\n";
    cin >> x;
    
    int a[x][x];
    int b[x][x];
    int d1[x];
    int d2[x];
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
                d1[i] = a[i][j];
               d2[i]= b[i][j];
            }
        }
    }
        for (i=0; i<x;i++){
            l = l+ d1[i];
            op = op +d2[i];
        }
        
        (l-op)<0?cout<<-(l-op)<<"\n":cout<<l-op<<"\n";
    return 0;
} 
