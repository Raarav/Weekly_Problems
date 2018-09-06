#include <iostream>

using namespace std;

int main()
{
  int start_pos1, jump1, start_pos2, jump2;
  int pos1, pos2;

  cout << "Enter the values x1, v1, x2, v2 -> " << endl;
  cin >> start_pos1 >> jump1 >> start_pos2 >> jump2;

  pos1 = start_pos1;
  pos2 = start_pos2;

  if ((start_pos1 > start_pos2 && jump1 > jump2) || (start_pos1 < start_pos2 && jump1 < jump2))
  {
    cout << "Will not be found because one is ahead with more speed.";
    return 1;
  }

  while (pos1 != pos2)
  {
    pos1 = pos1 + jump1;
    pos2 = pos2 + jump2;
    if (pos1 > 10000 || pos2 > 10000)
    {
      cout << "Not found!";
      return 1;
    }
  }

  cout << "Found at " << pos1 << endl;
}