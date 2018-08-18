#include<iostream>
using namespace std;
int main()
{
    int n, a[5], b[5];
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"\nNumbers -> ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
    }
    cout<<"\n";
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<=n-1; j++)
        {
            if(i==j){
                continue;
            }
            else{
                sum = sum + a[j];
            }
        }
        cout<<"sum w/0 "<<i+1<<" -> "<<sum<<endl;
        b[i] = sum;
    }
    int max = b[0];
    int min = b[0];
    for(int i=0; i<5; i++)
    {
        if(b[i]>max){
            max = b[i];
        }
        else if(b[i]<min){
            min = b[i];
        }
    }
    cout<<"Minimum number is -> "<<min<<endl;
    cout<<"Maximum number is -> "<<max<<endl;
    return 0;
}