// opers.cpp
// saves person object to disk

#include <fstream>
#include <iostream>
using namespace std;

class person
{
protected:
char name[80];
short age;
    
public:
void getdata()
{
    cout << "Enter name: "; cin >> name;
    cout << "Enter age: "; cin >> age;
}
   
};


int main()
{
    person pers;
    pers.getdata();

    ofstream outfile("PERSON.DAT", ios::binary);

    outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));

    return 0;
}