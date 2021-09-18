// sales.cpp
// averages a weeks's widget sales(6 days)

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    double sales[SIZE];

    cout << "Enter sales for 6 days\n";
    for(int j=0; j<SIZE; j++)
    {
        cin >> sales[j];
    }

    double total =0;
    for(int i =0; i<SIZE; i++)
    {
        total += sales[i];
    }
    double average = total / SIZE;
    cout << "Average is " << average << endl;

    return 0;
}