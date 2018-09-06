
#include <iostream>

using namespace std;

int main()
{
        int x , v1,v2,x1,x2;
    cout<<"the kangroo goes on that path only once"<<"\n";
    cout<<"All the parameters are in meters"<<"\n";
    cout<<"enter the total distance"<<"\n";
    cin>>x;
    cout<<"enter the starting point of kangro 1 "<<"\n";
    cin>>x1;
    cout<<"enter the starting point of kangro 1"<<"\n";
    cin>>x2;
    cout<<"enter the distance/jump of kangro 1"<<"\n";
    cin>>v1;
    cout<<"enter the distance/jump of kangro 2"<<"\n";
    cin>>v2;
    //x=100
    // x1=10;         use these value in input for easly getting answer
    // x2=28;
    // v1=5;
    // v2=4;
    if((x-x1)/v1 == (x-x2)/v2){
      cout<<"yes";
    }
        cout<<"no";
    return 0;
}
