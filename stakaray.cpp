// stakaray.cpp
// a stack as a class

#include <iostream>
using namespace std;

class stack
{
  private: 
  enum { MAX=10};
  int st[MAX];
  int top;

  public:
  stack()
  { top = 0; }
  
  void push(int var)
  {
      st[++top]=var;
  }

  int pop()
  {
      return st[top--];
  }
};

int main()
{
    stack s1;

    s1.push(11);
    s1.push(22);

    cout << "1: " << s1.pop()<< endl;
    cout << "2: " << s1.pop()<< endl;

    s1.push(33);
    s1.push(44);
    s1.push(55);
    s1.push(66);
    cout << "3: "<< s1.pop() << endl;
    cout << "4: "<< s1.pop() << endl;
    cout << "5: "<< s1.pop() << endl;
    cout << "6: "<< s1.pop() << endl;

    return 0;
}