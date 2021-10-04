// ptrobjs.cpp
// array of pointer to object

#include <iostream>
using namespace std;

class person
{
private:
    char name[40];
public:

void setname()
{
    cout << "Enter name: ";
    cin >> name;
}
void printname()
{
    cout << "\n Name is: " << name;
}
   
};


int main()
{
    person* persptr[100];
    int n=0;
    char choice;

    do
    {
        persptr[n] = new person;
        persptr[n]-> setname();
        n++;
        cout << "Enterr another (y/n)? ";
        cin >> choice;

    } while (choice =='y' );

    for (int i = 0; i < n; i++)
    {
        cout << "\nPerson number "<< i+1;
        persptr[i]->printname();
    }
    cout << endl;

    
    

    return 0;
}