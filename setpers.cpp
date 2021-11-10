// setpers.cpp
// uses a multset to hold person object

#include <set>
#include <string>
#include <iostream>
using namespace std;

class person
{
private:
    string lastname;
    string firstname;
    long phonenumber;

public:
    person() : lastname("blank"), firstname("blank"), phonenumber(0) {}

    person(string lana, string fina, long pho) : lastname(lana), firstname(fina), phonenumber(pho) {}

    friend bool operator<(const person &, const person &);
    friend bool operator==(const person &, const person &);

    void display() const
    {
        cout << endl
             << lastname << ",\t" << firstname << "\t\tPhone: " << phonenumber;
    }
};

bool operator<(const person &p1, const person &p2)
{
    if (p1.lastname == p2.lastname)
    {
        return (p1.firstname < p2.firstname) ? true : false;
    }
    return (p1.lastname < p2.lastname) ? true : false;
}

bool operator==(const person &p1, const person &p2)
{
    return (p1.lastname == p2.lastname &&
            p1.firstname == p2.firstname)
               ? true
               : false;
}

int main()
{
    person pers1("Deauville", "William", 8435150);
    person pers2("McDonald", "Stacey", 3327563);
    person pers3("Bartoski", "Peter", 6946473);
    person pers4("KuangThu", "Bruce", 4157300);
    person pers5("Wellington", "John", 9207404);
    person pers6("McDonald", "Amanda", 8435150);
    person pers7("Fredericks", "Roger", 7049982);
    person pers8("McDonald", "Stacey", 7764987);

    multiset<person, less<person>> persSet;

    multiset<person, less<person>>::iterator iter;

    persSet.insert(pers1);
    persSet.insert(pers2);
    persSet.insert(pers3);
    persSet.insert(pers4);
    persSet.insert(pers5);
    persSet.insert(pers6);
    persSet.insert(pers7);
    persSet.insert(pers8);

    cout << "\nNumber of entries = " << persSet.size();

    iter = persSet.begin();
    while (iter != persSet.end())
    {
        (*iter++).display();
    }

    string searchLastName, searchFirstName;
    cout << "\n\nEnter last name of person to search for: ";
    cin >> searchLastName;
    cout << "Enter first name: ";
    cin >> searchFirstName;
    person searchPerson(searchLastName, searchFirstName, 0);

    int cntPersons = persSet.count(searchPerson);
    cout << "Number of person with this name = " << cntPersons;

    iter = persSet.lower_bound(searchPerson);
    while (iter != persSet.upper_bound(searchPerson))
    {
        (*iter++).display();
    }

    cout << endl;

    return 0;
}