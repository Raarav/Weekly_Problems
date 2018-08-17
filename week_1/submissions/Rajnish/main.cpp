#include <iostream>

using namespace std;

int main()
{
    int arr[20][20];
    int m,n,i,j,sum1=0,sum2=0,sum3=0;
    cout<<"Enter the no. of rows of array"<<endl;
    cin>>m;
    cout<<"Enter the no. of columns of array"<<endl;
    cin>>n;
    cout<<"Enter the array element"<<endl;
    for(i=0;i<=m-1;i++){
        for(j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<=m-1;i++){
        for(j=0;j<=n-1;j++){
            if(i==j){
                sum1=sum1 + arr[i][j];
            }
        }
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            if(i+j==m-1){
                    sum2=sum2 + arr[i][j];

            }
        }
    }
    cout<<sum1<<endl<<sum2<<endl;
    sum3 = sum1 - sum2;
    if(sum3<0){
        sum3=-(sum3)
        ;
    }
    cout<<sum3;


    return 0;
}
