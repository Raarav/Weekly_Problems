#include <iostream>

using namespace std;

int main()
{
    string word;
    int i;
    cout<<"Enter the word";
    cin>>word;
    int check=1;
    for( i=0; word[i]!= '\0';i++)
    {
        if(word[i]!=97 && word[i]!=101 && word[i]!=105 && word[i]!=111 && word[i]!= 117 && word[i]!=110)
        {
            if(word[i+1]!=97 && word[i+1]!=101 && word[i+1]!=105 && word[i+1]!=111 && word[i+1]!=117)
            {
                cout<<"NO";
                check=1;
                break;
            }

        }
        else
        {
            if(word[i+1]>=97 && word[i+1]<=122)
            {
                check=0;
            }
        }
        if(word[i]==110)
        {
            if(word[i+1]>=97 && word[i+1]<=122)
            {
                check=0;

            }
        }


    }
    if(check==0)
    {
        cout<<"Yes";
    }


    return 0;
}
