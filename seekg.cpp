// seekg.cpp
// seeks particular person in file

#include <fstream>
#include <iostream>
using namespace std;

class person 
{
    protected:
    char name[80];
    int age;
    public:
    void  getdata()
    {
        cout <<"\n Enter name: "; cin >> name;
        cout <<"\n Enter age: "; cin >> age;
    }
    void showdata(void)
    {
        cout << "\n  Name: " << name;
        cout << "\n  Age: " << age;
    }
};

int main()
{
    person pers;
    ifstream infile;
    infile.open("GROUP.DAT",ios::in |ios::binary);

    infile.seekg(0, ios::end);
    int endposition = infile.tellg();
    int n = endposition / sizeof(person);

    cout << "\nEnter person number: ";
    cin >> n;
    int position = (n-1)*sizeof(person);
    infile.seekg(position);

    infile.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
    pers.showdata();
    cout << endl;

    return 0;
}