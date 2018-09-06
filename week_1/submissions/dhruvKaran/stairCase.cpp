#include <iostream>

using namespace std;

int main()
{   int x,k,i,j;
    cout<<"printing the staircase from right to left"<< "\n";
    cout<<"enter the number steps in stairs"<<"\n";
    cin >> x;
    for(i =1;i<=x;i++){
        for(j=1;j<=x-i;j++){
            cout<<""<<"\t";
        }
        for(k=0;k<i;k++){
            cout<<"*"<<"\t";
        }
        
        cout<<"\n";
    }
    return 0;
}
