#include<iostream>
using namespace std;
int main()
{
    int n, sum1=0, sum2=0;
    int a[5][5];
    cout<<"Enter the order of the square matrix : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nThe matrix you entered is : "<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<< a[i][j];
        }
        cout<<"\n";
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j){
                sum1 = sum1 + a[i][j];
            }
        }
    }
    cout<<"Sum of the left diagonal elements of the matrix is : "<<sum1<<endl;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(((i+j)==(n-1))){
                sum2 = sum2 + a[i][j];
            }
        }
    }
    cout<<"Sum of the right diagonal elements of the matrix is : "<<sum2<<endl;

    return 0;
}