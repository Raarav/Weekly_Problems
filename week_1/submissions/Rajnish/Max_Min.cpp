#include <iostream>

using namespace std;

int main()
{
 int a,b,c,d,e;
 int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
 cout<<"Enter the five numbers"<<endl;
 cin>>a>>b>>c>>d>>e;
 sum1=b+c+d+e;
 sum2=a+c+d+e;
 sum3=a+b+d+e;
 sum4=a+b+c+e;
 sum5=a+b+c+d;
 if(sum1>sum2)
    {
     if(sum1>sum3){
        if(sum1>sum4){
            if(sum1>sum5){
                        cout<<"Maximum "<<sum1<<endl;
                    }

        }
    }

}


if(sum2>sum3)
    {
    if(sum2>sum4){
        if(sum2>sum5){
                if(sum2>sum1){
                        cout<<"Maximum "<<sum2<<endl;
                    }

                }
            }

        }

if(sum3>sum4)
    {
    if(sum3>sum5){
        if(sum3>sum2){
                if(sum3>sum1){
                        cout<<"Maximum "<<sum3<<endl;
                    }

                }
            }

        }

if(sum4>sum5)
    {
    if(sum4>sum1){
        if(sum4>sum2){
                if(sum4>sum1){
                        cout<<"Maximum "<<sum4<<endl;
                    }

                }
            }

        }


 if(sum5>sum1)
    {
    if(sum5>sum2){
        if(sum5>sum3){
                if(sum5>sum4){
                        cout<<"Maximum "<<sum5<<endl;
                    }

                }
            }

        }
if(sum1<sum2)
    {
     if(sum1<sum3){
        if(sum1<sum4){
            if(sum1<sum5){
                        cout<<"Minimum "<<sum1<<endl;
                    }

        }
    }

}
if(sum2<sum3)
    {
    if(sum2<sum4){
        if(sum2<sum5){
                if(sum2<sum1){
                        cout<<"Minimum "<<sum2<<endl;
                    }

                }
            }

        }
if(sum3<sum4)
    {
    if(sum3<sum5){
        if(sum3<sum2){
                if(sum3<sum1){
                        cout<<"Minimum "<<sum3<<endl;
                    }

                }
            }

        }
if(sum4<sum5)
    {
    if(sum4<sum1){
        if(sum4<sum2){
                if(sum4<sum1){
                        cout<<"Minimum "<<sum4<<endl;
                    }

                }
            }

        }
if(sum5<sum1)
    {
    if(sum5<sum2){
        if(sum5<sum3){
                if(sum5<sum4){
                        cout<<"Minimum "<<sum5<<endl;
                    }

                }
            }

        }


 return 0;
}
