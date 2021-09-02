// recurfactorial.cpp

#include <iostream>
using namespace std;

int factorial();

int main()
{
    int n;

    cout << "Enter the number whose Factorial required: ";
    cin >> n;

    cout << factorial() << endl;

    return 0;
}

int factorial(int n)
{
    if (n=1)
    {
        return 1;
    }
    else{

    return n*factorial(n-1);
    }
}