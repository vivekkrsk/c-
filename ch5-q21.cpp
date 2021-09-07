// ch5-q21.cpp

#include <iostream>
using namespace std;

int bar(char);
int bar(char, char);

int main()
{
  int a=  bar('+');
  int b=  bar('+', '*');

   cout << a << endl << b;

    return 0;
}

int bar(char ch)
{
  return ch;
}
int bar(char ch1, char ch2)
{
   return (ch1+ch2); 
}