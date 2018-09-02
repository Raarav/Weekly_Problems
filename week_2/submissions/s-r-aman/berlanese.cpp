#include <iostream>

using namespace std;

bool tell_me_the_truth_about_vowel(char input, int tracker = 0)
{
  int vowel_ascii[] = {97, 101, 105, 110, 111, 117};
  if (vowel_ascii[tracker] == int(input))
  {
    return true;
  }
  if (tracker == 7 || !int(input))
  {
    return false;
  }
  return tell_me_the_truth_about_vowel(input, tracker + 1);
}

bool tell_me_the_truth_about_berlanese(string input, int tracker = 0)
{
  int size = input.size();

  if (tracker >= size)
  {
    return true;
  }

  bool vowel = tell_me_the_truth_about_vowel(input[tracker]);

  if (!vowel)
  {
    bool vowel_followed = tell_me_the_truth_about_vowel(input[tracker + 1]);
    if (!vowel_followed)
      return false;
  }

  return tell_me_the_truth_about_berlanese(input, tracker + 1);
}

int main()
{
  string input = "";

  cout << "Enter the word -> ";
  cin >> input;

  bool answer = false;

  answer = tell_me_the_truth_about_berlanese(input);

  cout << (answer ? "YES!" : "NO!") << endl;
}