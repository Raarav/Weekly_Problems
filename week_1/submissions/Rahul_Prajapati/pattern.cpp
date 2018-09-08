#include <iostream>

using namespace std;

int main()
{
    int i,j,val,k;

    cout<<"enter the no. of row for pettern"<<endl;
    cin>>val;
    for(i=1;i<val+1;i++)
    {
        for(j=(val-1);j>i-1;j--)
        {
            cout<<" ";

        }
        for(k=1;k<i+1;k++)
            {
            cout<<"#";
            }
        cout<<endl;
    }

    return 0;
}
