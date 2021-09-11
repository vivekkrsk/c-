//table2.cpp
// demostrates function definition function calls

#include <iostream>
using namespace std;

//starline function definition, no declaration
void starline()
{
    for (int i = 0; i < 45; i++)
    {
        cout << '*';
    }
    cout << endl;
}

int main()
{
    starline();
    cout << "Data type Range" << endl;
    starline();
    cout << "char        -128 to 127" << endl
         << "short       -32,768 to 32,767" << endl
         << "int          System dependent" << endl
         << "long        -2,147,483,648 to 2,147,483,647" << endl;
    starline();

    return 0;
}