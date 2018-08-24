#include <iostream>

using namespace std;

int tell_me_the_truth_about_four_numbers(int list[], int sum, int index, int len, int to_find, int tracker)
{
  // cout << sum << endl;
  // cout << "Index => " << index << endl;
  if (sum == to_find && tracker > 3)
  {
    // cout << "I ran";
    return 1;
  }

  if (index == len)
  {
    return 0;
  }

  if (index > 3)
  {
    if ((sum + list[index + 1]) == to_find && tracker > 3)
    {
      // cout << "I ran too " << index << "," << sum
      //  << endl;
      return 1;
    }
    else
    {
      return tell_me_the_truth_about_four_numbers(list, sum, index + 1, len, to_find, tracker);
    }
  }

  return tell_me_the_truth_about_four_numbers(list, sum + list[index], index + 1, len, to_find, tracker + 1);
}

int main()
{
  int len;
  // Debug
  cout << "Enter the lenth of array 👉 ";
  cin >> len;

  int list[len];
  // Debug
  cout << "Enter the array elements one by one 👇" << endl;
  for (int i = 0; i < len; i++)
  {
    cin >> list[i];
  }

  int to_find = 0;
  // Debug
  cout << "Enter the sum to find 🔎" << endl;
  cin >> to_find;

  bool answer = false;

  for (int i = 0; i < len; i++)
  {
    if (answer)
      break;
    answer = tell_me_the_truth_about_four_numbers(list, 0, i, len, to_find, 0);
  }

  cout << endl;
  cout << answer << endl;
  cout << "😭 I Still doubt it! Please test it roughly!";
}