#include <iostream>

using namespace std;

int main()
{
    int x1,v1,x2,v2,kangaroo1,kangaroo2;
    cout<<"Enter the location of first kangaroo"<<endl;
    cin>>x1;
    cout<<"Enter the speed of first kangaroo"<<endl;
    cin>>v1;
    cout<<"Enter the location of second kangaroo"<<endl;
    cin>>x2;
    cout<<"Enter the speed of second kangaroo"<<endl;
    cin>>v2;
    kangaroo1=x1+v1;
    kangaroo2=x2+v2;
    if(x1<x2 || v1<v2){
    while(kangaroo1!=kangaroo2)
    {
        kangaroo1=kangaroo1+v1;
        kangaroo2=kangaroo2+v2;


    }
    }

    if(kangaroo1==kangaroo2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
