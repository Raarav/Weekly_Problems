#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int i = 2;
    int j = 3;
    int k = 1;
    int mul = 1;
    int a[100] = {2};
    int flag = 0;
    for (; j < n + 1; j++)
    {
        for (; i < j; i++)
        {
            if (j % i == 0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            a[k] = i;
            k++;
        }
        i = 2;
    }
    int l = k;
    k = 0;
    for (; k < l; k++)
    {
        // cout<<a[k]<<"\n";
        mul = mul * a[k];
    }
    cout << mul << "\n";
    int b = 1;
    int h = 2;
    int num = mul;
    int flag2 = 0;
    bool check = true;
    while (check)
    {
        num = num + 1;
        for (; h < num; h++)
        {
            if (num % h == 0)
            {
                break;
            }
        }
        if (num == h)
        {
            check = false;
        }
        h = 2;
    }
    cout << "fortune number is"
         << "\t" << num - mul << "\n";
    // if(flag2 ==1){
    //   cout<<num-mul<<"\n";
    //   }
}