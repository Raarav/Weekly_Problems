#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int h,m,s;
    string Am_or_Pm;
    cout<< "enter following"<< endl;
    cout<<"hours :  ";
    cin>>h;
    cout<<"minutes : ";
    cin>>m;
    cout<<"seconds: ";
    cin>>s;
    cout<<"enter either am or pm  ";
    cin>>Am_or_Pm;

    if(Am_or_Pm=="am" ){
        if(h==12)
        h=0;
        cout<<"time in 24 hour format is"<<"\n"<<h<<"\:"<<m<<"\:"<<s<<"\n";

    }
    else{
    h = h+12;
    cout<<"time is"<<"\n"<<h<<"\:"<<m<<"\:"<<s<<"\t"<<Am_or_Pm<<"\n";
}

    return 0;
}
