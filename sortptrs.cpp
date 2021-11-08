// sortptrs.cpp
// sorts person object stored by pointer

#include <vector>
#include <algorithm>
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
    person() : lastname("blank"), firstname("blank"), phonenumber(0L) {}
    person(string lana, string fina, long pho) : lastname(lana), firstname(fina), phonenumber(pho)
    {
    }
    friend bool operator<(const person &, const person &);
    friend bool operator==(const person &, const person &);

    void display() const
    {
        cout << endl
             << lastname << ",\t" << firstname << "\t\tPhone: " << phonenumber;
    }

    long get_phone() const
    {
        return phonenumber;
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
    return (p1.lastname == p2.lastname && p1.firstname == p2.firstname) ? true : false;
}

class comparepersons
{
public:
    bool operator()(const person *ptrP1, const person *ptrP2) const
    {
        return *ptrP1 < *ptrP2;
    }
};

class displayperson
{
public:
    void operator()(const person *ptrP) const
    {
        ptrP->display();
    }
};

int main()
{
    vector<person *> vectPtrsPers;

    person *ptrP1 = new person("KuangThu", "Bruce", 4157300);
    person *ptrP2 = new person("Deauville", "William", 8435150);
    person *ptrP3 = new person("Wellington", "John", 9207404);
    person *ptrP4 = new person("Bartoski", "Peter", 6946473);
    person *ptrP5 = new person("Fredericks", "Roger", 7049982);
    person *ptrP6 = new person("McDonald", "Stacey", 7764987);

    vectPtrsPers.push_back(ptrP1); 
    vectPtrsPers.push_back(ptrP2);
    vectPtrsPers.push_back(ptrP3);
    vectPtrsPers.push_back(ptrP4);
    vectPtrsPers.push_back(ptrP5);
    vectPtrsPers.push_back(ptrP6);
    for_each(vectPtrsPers.begin(), vectPtrsPers.end(), displayperson());
    sort(vectPtrsPers.begin(), vectPtrsPers.end() );
    cout << "\n\nSorted person";

    for_each(vectPtrsPers.begin(), vectPtrsPers.end(), displayperson());
    sort(vectPtrsPers.begin(), vectPtrsPers.end(), comparepersons());

    cout << "\n\nSorted person";
    for_each(vectPtrsPers.begin(), vectPtrsPers.end(), displayperson());
    while (!vectPtrsPers.empty())
    {
        delete vectPtrsPers.back();
        vectPtrsPers.pop_back();
    }
    cout << endl;

    return 0;
}