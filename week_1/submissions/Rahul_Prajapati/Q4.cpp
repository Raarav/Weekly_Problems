#include<iostream>

using namespace std;
int main()
{
    const int num=5;
    int val,a[num],i,j,skip,sum=0,b[num],maxi,mini;

    cout<<"enter five no."<<endl;
    for(i=0;i<5;i++)
    {
        cin>>val;
        a[i]=val;
    }
    for(i=0;i<5;i++)
    {
        skip=i;
        for(j=0;j<5;j++)
        {

            if(i==j)
             {
                 if(j==(val-1)&&i==(val-1))
                 {
                     break;
                 }
                j=j+1;
             }
                sum=sum+a[j];

        }

        cout<<"Sum w/o "<<skip;
        cout<<"  "<<sum<<endl;
        b[i]=sum;

        sum=0;
    }
    maxi=b[0];
    mini=b[0];
    for(i=0;i<5;i++)
    {
       if(b[i]>maxi)
       {
           maxi=b[i];
       }
       if(b[i]<mini)
       {
           mini=b[i];
       }

    }
    cout<<"Maximum number is -> "<<maxi<<endl;
    cout<<"Minimum number is -> "<<mini<<endl;

    return 0;
}


