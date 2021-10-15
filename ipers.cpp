// ipres.cpp
// reads person object from disk

#include <fstream>
#include <iostream>
using namespace std;

class person
{
protected:
char name[80];
short age;
    
public:
void showdata()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
   
};

int main()
{
     person pers;
   
    ifstream infile("PERSON.DAT", ios::binary);

    infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
    pers.showdata();

    return 0;
}