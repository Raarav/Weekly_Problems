#include <iostream>

using namespace std;

int tell_me_the_truth_about_four_numbers(
    int list[],
    int len,
    int to_find,
    int tracker_1 = 1,
    int tracker_2 = 2,
    int tracker_3 = 3,
    int tracker_4 = 4,
    int called = 0)
{
  int sum = list[tracker_1 - 1] + list[tracker_2 - 1] + list[tracker_3 - 1] + list[tracker_4 - 1];
  if (sum == to_find)
  {
    return 1;
  }

  if (tracker_1 == len - 3 && tracker_2 == len - 2 && tracker_3 == len - 1 && tracker_4 == len)
  {
    return 0;
  }

  bool check = false;

  if (tracker_4 < len && !check)
  {
    tracker_4 = tracker_4 + 1;
    check = true;
  }

  if (tracker_4 == len && len >= tracker_3 + 2 && !check)
  {
    tracker_4 = tracker_3 + 2;
    tracker_3 = tracker_3 + 1;
    check = true;
  }
  if (tracker_3 == len - 1 && len >= tracker_2 + 3 && !check)
  {
    tracker_4 = tracker_2 + 3;
    tracker_3 = tracker_2 + 2;
    tracker_2 = tracker_2 + 1;
    check = true;
  }
  if (tracker_2 == len - 2 && len >= tracker_1 + 4 && !check)
  {
    tracker_4 = tracker_1 + 4;
    tracker_3 = tracker_1 + 3;
    tracker_2 = tracker_1 + 2;
    tracker_1 = tracker_1 + 1;
    check = true;
  }

  called = called + 1;
  return tell_me_the_truth_about_four_numbers(list, len, to_find, tracker_1, tracker_2, tracker_3, tracker_4, called);
}

int main()
{
  int len;
  // Debug
  cout << "Enter the length of array 👉 ";
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

  bool answer = tell_me_the_truth_about_four_numbers(list, len, to_find);

  cout << endl;
  cout << answer << endl;
  cout << "😭 I Still doubt it! Please test it roughly!";
}