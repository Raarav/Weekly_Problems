#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[5][5];
    cout << "Ente the value of n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((i + j) >= (n - 1)))
            {
                cout << "#";
            }
            else
            {
                cout << " ".;
            }
        }
        cout << "\n";
    }
    return 0;
}
