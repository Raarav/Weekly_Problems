#include<iostream>
using namespace std;
int main()
{
    int p1, p2, v1, v2;
    cout<<"Enter the position and speed of the two kangarooes respectively : "<<endl;
    cin>>p1>>v1>>p2>>v2;
    int x1 = p1;
    int x2 = p2;
        for(int i=0;i<10000;i++){
            while(x1!=x2){
                x1 = x1 + p1;
                x2 = x2 + p2;
            
            }
            cout<<"YES"<<endl;
            exit(0);
            }
        
        cout<<"NO"<<endl;
    return 0;
}