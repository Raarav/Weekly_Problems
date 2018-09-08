#include<iostream>

using namespace std;

int main()
{
    int i,j,k,val,n;

    cout<<"enter no. of raw:- "<<endl;
    cin>>val;

    for(i=1;i<val+1;i++)
    {
        for(j=((val*2)/2);j>i;j--)
        {
           cout<<"  ";
        }
        for(k=i;k<=((i*2)-1);k++)
        {
            cout<<k<<" ";
            if(k==((i*2)-1))
            {
                for(n=((i*2)-2);n>=i;n--)
                {
                    cout<<n<<" ";
                }
            }
        }

        cout<<endl;

    }
    return 0;
}
