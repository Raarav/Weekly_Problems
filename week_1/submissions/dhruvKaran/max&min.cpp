#include <iostream>
#include <stdlib.h>

using namespace std;
int min(int arr[], int n);
int max(int arr[], int n);

int main()
{

    int x;
    int lan;

    cout << "Enter the number subject";
    cin >> x;
    int user[x];

    for (int i = 0; i < x; i++)
    {
        cout << "Enter the marks";
        cin >> user[i];
    }

    for (int i = 0; i < x; i++)
    {

        for (int j = i + 1; j < x; j++)
        {
            if (user[i] > user[j])
            {
                lan = user[i];
                user[i] = user[j];
                user[j] = lan;
            }
        }
    }
    cout << min(user, x) << "\n";
    cout << max(user, x) << "\n";

    return 0;
}
int min(int arr[], int n)
{
    int i, l = 0;
    for (i = 0; i < n; i++)
    {
        if (i < (n - 1))
        {
            l = l + arr[i];
        }
    }
    return l;
}
int max(int arr[], int n)
{
    int i, l = 0;
    for (i = 0; i < n; i++)
    {
        if (i > 0)
        {
            l = l + arr[i];
        }
    }
    return l;
}