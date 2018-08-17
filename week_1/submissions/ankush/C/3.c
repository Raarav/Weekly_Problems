#include <stdio.h>
#include<string.h>


int main()
{
    int h,m,s;
    char Am_or_Pm[40];
    printf( "enter following \n");
    printf("hours :  ");
    scanf("%d",&h);
    printf("minutes : ");
    scanf("%d",&m);
    printf("seconds: ");
    scanf("%d",&s);
    printf("enter either am or pm  ");
    scanf("%d",Am_or_Pm);

    if(strcmpi(Am_or_Pm,"am" )){
        if(h==12)
        h=0;
        printf("time in 24 hour format is \n %d : %d : %d \n",h,m,s);

    }
    else{
    h = h+12;
        printf("time in 24 hour format is \n %d : %d : %d \n",h,m,s);
}

    return 0;
}
