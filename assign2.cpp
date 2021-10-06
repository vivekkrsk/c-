// assign2.cpp
// return content to this pointer

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
    alpha& operator=(alpha& a)
    {
        data = a.data;
        cout << "\nAssignment operator invoked";
        return *this;
    }
};

int main()
{
    alpha a1(37);
    alpha a2,a3;
     a3 = a2 = a1;
    

    cout << "\na2 = ";
    a2.display();

    cout << "\na3 = ";
    a3.display();
    cout << endl;

    return 0;
}