#include<iostream>
using namespace std;
int main()
{
    int n, a[6], b[15];
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
        cout<<" "<<a[i];
    }
    cout<<"\n";
    for(int i=0; i<15; i++)
    {
        int sum = 0;
        for(int j=0; j<=n-2; j++)
        {
            if(i==j) {
                continue;
            }
            else{
                sum = sum + a[j];
            }
        }
        //cout<<"Sum w/0 "<<i+1<<" -> "<<sum<<endl;
        b[i] = sum;
    }
    int i, cnt=0, x;
    cout<<"Enter the element to search : "<<endl;
    cin>>x;
    for(i=0; i<n; i++)
        {
                if(b[i]==x)
                {
                        cnt=1;
                        break;
                }
        }
    if(cnt==1)
        cout<<"1";
    else
        cout<<"0";
    return 0;
}
