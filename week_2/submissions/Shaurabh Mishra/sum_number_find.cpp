
#include <iostream>
using namespace std;
int main()
{
    int N, a[10], X;
    cout << "Enter the number of elements : ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    cout << "\nEnter the number to check : ";
    cin >> X;
    int sum = 0;
    for (int j = 0; j < N; j++)
    {
        for (int i = j; i < 4; i++)
        {
            sum = sum + a[i];
        }
        if (sum == X)
        {
            cout << "1" << endl;
            break;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}