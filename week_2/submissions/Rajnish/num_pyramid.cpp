#include<iostream>

using namespace std;

int main()
{
int i,j,n,k,p;
cout<<"Enter the number"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
 for(j=1;j<=(n-i);j++)
{
 cout<<" ";
}
if(i==1)
{
    cout<<"1";
}
else
{
    for(k=i;k<=(2*i)-1;k++)
    {
        cout<<k;
    }
    for(p=k-2;p>=i;p--)
    {
        cout<<p;
    }
}
cout<<endl;
}

return 0;
}
