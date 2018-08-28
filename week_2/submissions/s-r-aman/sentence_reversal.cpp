#include <iostream>

using namespace std;

class Node
{
public:
  string word;
  Node *next;
};

class Stack
{
  Node *head = NULL;

public:
  Stack(string word)
  {
    Node node_initial;
    node_initial.word = word;
    node_initial.next = NULL;
    head = &node_initial;
  }

  Stack(void) {}

  void push(string word)
  {
    Node *temp = new Node;
    temp->word = word;
    temp->next = head;
    head = temp;
  }

  string pop()
  {
    if (head == NULL)
    {
      return "false";
    }
    string temp_data = head->word;
    Node *temp = head;
    head = head->next;
    delete (temp);
    return temp_data;
  }

  bool is_empty()
  {
    if (head == NULL)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main()
{
  string input;

  cout << "Enter the string -> ";
  cin >> input;

  string temp = "";
  Stack mystack;

  for (int i = 0; i <= input.size(); i++)
  {
    if (input[i] == '.' || i == input.size())
    {
      mystack.push(temp);
      temp = "";
    }
    else
    {
      temp = temp + input[i];
    }
  }

  while (!mystack.is_empty())
  {
    cout << mystack.pop();
    if (!mystack.is_empty())
    {
      cout << ".";
    }
  }

  cout << endl;
  cout << "DOOOONEE! 🔥🔥" << endl;
}