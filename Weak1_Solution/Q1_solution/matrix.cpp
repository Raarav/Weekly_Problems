#include <iostream>

using namespace std;

int main()
{
int a[3][3],i,j,val,sum=0,sum1=0,m=3,n;
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          cin>>val;
          a[i][j]=val;
      }
  }

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          cout<<a[i][j];

      }
      cout<<"\n";
  }

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          if(i==j)
          {
              sum=sum+a[i][j];
          }

      }

  }

  cout<<sum<<endl;

  for(n=0;n<3;n++)
  {
      m--;
      sum1=sum1+a[n][m];
  }

  cout<<sum1<< endl;

  cout<<sum-sum1;

   return 0;
}
