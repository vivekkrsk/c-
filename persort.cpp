// persort.cpp
// sorts person and object using array of pointers

#include <iostream>
#include <string>
using namespace std;

class person
{
protected:
string name;
public:
void setname()
{ cout << "Enter name: "; cin >> name;}
void printname()
{ cout << endl << name; }
string getname()
{ return name;}

};

int main()
{
  void bsort(person**, int);
  person*  persptr[100];
  int n=0;
  char choice;

  do
  {
      persptr[n] = new person;
      persptr[n]-> setname();
      n++;
      cout << "Enter another (y/n)? ";
      cin >> choice;
  } while (choice == 'y');
    
    cout << "\nUnsorted list:";
    for (int i = 0; i < n; i++)
    {
        persptr[i]->printname();
    }

    bsort(persptr, n);

    cout << "\nSorted list: ";
    for (int i = 0; i < n; i++)
    {
        persptr[i]->printname();
    }
    
    cout << endl;

    return 0;
}

void bsort(person** pp, int n)
{
    void order(person**, person**);
    
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            order(pp+i, pp+k);
        }
        
    }
    
}

void order(person** pp1, person** pp2)
{
    if ((*pp1)->getname() < (*pp2)->getname())
    {
        person* tempptr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
    
}