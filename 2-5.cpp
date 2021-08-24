// ex2-5

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char letter;
    int result;

    cout << "Enter a uppercase or Lowercase Letter: ";
    cin >> letter;
    result = islower(letter);
    cout << "Output is: " << result << endl;
    return 0;
}