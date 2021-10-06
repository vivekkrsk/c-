// assign.cpp
// overloads assignment operator (=)

#include <iostream>
using namespace std;

class alpha
{
private:
    int data;

public:
    alpha()
    {
    }
    alpha(int d)
    {
        data = d;
    }
    void display()
    {
        cout << data;
    }
    alpha operator=(alpha& a)
    {
        data = a.data;
        cout << "\nAssignment operator invoked";
    }
};

int main()
{
    alpha a1(37);
    alpha a2;
    a2 = a1;

    cout << "\na2 = ";
    a2.display();

    alpha a3 = a2;
    cout << "\na3 = ";
    a3.display();
    cout << endl;

    return 0;
}