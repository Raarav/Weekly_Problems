/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{   
    cout<<"lets convert 12 into 24 :-)"<<"\n";
    int h,m,s;
    string flag;
    cout<< "entre following"<< endl;
    cout<<"hours  from 0 to 12"<<"\t";
    cin>>h;
    cout<<"minutes from 0 to 60"<<"\t";
    cin>>m;
    cout<<"seconds from 0 to 60"<<"\t";
    cin>>s;
    cout<<"enter either am or pm"<<"\t";
    cin>>flag;
    if(flag == "pm" && h<12 ){
        h = 12+h;
        cout<<"time is"<<"\n"<<h<<"\:"<<m<<"\:"<<s<<"\n";
        
    }
    else{
    h = h-12;
    cout<<"time is"<<"\n"<<h<<"\:"<<m<<"\:"<<s<<"\t"<<flag<<"\n";
}

    return 0;
}
