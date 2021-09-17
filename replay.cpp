// replay.cpp
// gets four age from user and display them

#include <iostream>
using namespace std;

int main()
{
    int age[4];

    for(int j=0; j<4; j++)
    {
        cout << "Enter an age: ";
        cin >> age[j];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "You entered " << age[i]<< endl;
    }
    
    return 0;
}