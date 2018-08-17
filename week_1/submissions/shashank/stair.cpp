#include <iostream>
using namespace std;
int main() {
    int n,i,j,k; 
    cout<<"no of steps:";
    cin>>n;

    for(k=0;k<n;k++)
    {
      //for spaces
    for(i=n-1;i>k;i--)
    {
      cout<<" ";
    } 
    // for 
    for(j=0;j<k+1;j++)
    cout<<"#";
    //back to the loop of k and n
    cout<<"\n";
    }   
    cout<<"done! bitches😉";
    return 0;
}