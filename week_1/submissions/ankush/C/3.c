#include <stdio.h>
#include<string.h>


int main()
{
    int h,m,s;
    string Am_or_Pm;
    printf( "enter following \n");
    printf("hours :  ");
    scanf("%d",&h);
    printf("minutes : ");
    scanf("%d",&m);
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
