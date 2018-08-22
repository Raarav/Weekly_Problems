using namespace std;

int main()
{
    int i = 0, j = 1, k = 0, l = 1;
    int n = 5;
    for (; i < n; i++)
    {
        for (; j <= (n - i); j++)
        {
            cout << "\t";
        }
        j = 1;
        for (; k < (2 * i + 1); k++)
        {
            // for (;l<(2*i +1);l++){
            //     if(l==(2*n-1)){
            //        cout<<l;
            //     }

            // }
            // if(n-i ==){
            //   cout<<i+1;
            // }
            // if(2*n-1){
            //   cout<<i+2;
            // }
            cout << "*";
            cout << "\t";
        }
        k = 0;
        cout << "\n";
    }

    return 0;
}
