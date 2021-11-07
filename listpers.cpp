// listpers.cpp
// uses a list to hold object

#include <list>
#include <algorithm>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;

class person
{
private:
    string lastname;
    string firstname;
    long phonenumber;

public:
    person() : lastname("blank"), firstname("blank"), phonenumber(0L) {}

    person(string lana, string fina, long pho) : lastname(lana), firstname(fina), phonenumber(pho) {}

    friend bool operator<(const person &, const person &);
    friend bool operator==(const person &, const person &);
    friend bool operator!=(const person &, const person &);
    friend bool operator>(const person &, const person &);

    void display() const
    {
        cout << endl
             << lastname << ",\t" << firstname << "\t\tPhone: " << phonenumber;
    }

    long get_phone() const{ return phonenumber;}
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

bool operator != (const person& p1, const person& p2)
{
    return !(p1==p2);
}

bool operator > (const person& p1, const person& p2 )
{
    return !(p1<p2) && !(p1==p2);
}

int main()
{
    list<person> perslist;
    list<person>::iterator iter1;

    perslist.push_back( person("Deauville", "William", 8435150) );
    perslist.push_back( person("McDonald", "Stacey", 3327563) );
    perslist.push_back( person("Bartoski", "Peter", 6946473) );
    perslist.push_back( person("KuangThu", "Bruce", 4157300) );
    perslist.push_back( person("Wellington", "John", 9207404) );
    perslist.push_back( person("McDonald", "Amanda", 8435150) );
    perslist.push_back( person("Fredericks", "Roger", 7049982) );
    perslist.push_back( person("McDonald", "Stacey", 7764987) );

    cout << "\nNumber of entries = "<< perslist.size();

    iter1 = perslist.begin();
    while (iter1 != perslist.end())
    {
        (*iter1++).display();
    }

    string searchLastName, searchFirstName;
    cout << "\n\nEnter last name of person to search for: ";
    cin >> searchLastName;
    cout << "Enter first name: ";
    cin >> searchFirstName;
    person searchPerson(searchLastName, searchFirstName, 0L);

    iter1 = find(perslist.begin(), perslist.end(), searchPerson);
    if (iter1 != perslist.end() )
    {
        cout << "Person(s) with that name is(are)";
        do
        {
            (*iter1).display();
            ++iter1;
            iter1 = find(iter1, perslist.end(), searchPerson);
        } while (iter1 != perslist.end() );
        
    }
    else
    {
        cout << "There is no person with that name.";
    }

    cout << "\n\nEnter phone number (format 1234567): ";
    long sNumber;
    cin>>sNumber;

    bool found_one = false;
    for(iter1=perslist.begin(); iter1 != perslist.end(); ++iter1)
    {
        if (sNumber == (*iter1).get_phone() )
        {
            if (!found_one)
            {
                cout << "Person(s) with that phone number is(are)";
                found_one = true;
            }
            (*iter1).display();
        }
        
    }
    
    if (!found_one)
    {
        cout << "There is no person with that phone number";
    }
    
    cout << endl;

    return 0;
}