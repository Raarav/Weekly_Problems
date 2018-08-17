#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> element_list;
  vector<int> sum_list;

  int len;

  cout << "Enter the number of elements -> ";
  cin >> len;

  cout << "Enter the elements one by one 👇" << endl;

  for (int i = 0; i < len; i++)
  {
    int element;
    cin >> element;
    element_list.push_back(element);
  }

  for (int i = 0; i < element_list.size(); i++)
  {
    int sum = 0;
    for (int j = 0; j < element_list.size(); j++)
    {
      if (i == j)
        continue;
      sum = sum + element_list[j];
    }
    sum_list.push_back(sum);
    cout << "Sum with skipping " << element_list[i] << " -> " << sum << endl;
  }

  int least = sum_list[0], most = sum_list[0];

  for (int i = 0; i < sum_list.size(); i++)
  {
    least = least > sum_list[i] ? least : sum_list[i];
    most = most < sum_list[i] ? most : sum_list[i];
  }
  cout << endl;
  cout << "<------------FINALLY------------>" << endl;
  cout << "The maximum⚡ value is " << most << endl;
  cout << "The minimum💤 value is " << least << endl;
}
