// pubpriv.cpp
// tests publicly and privately - derived classes

#include <iostream>
using namespace std;

class A
{
private:
    int privdataA;

protected: 
int protdataA;

public:
int pubdataA;   
};

class B : public A
{
    public:
    void funct()
    {
        int a;
      //  a = privdataA;  error: not accessible
        a = protdataA;
        a = pubdataA;
    }
};

class C : private A
{
    public:
    void funct()
    {
        int a;
     //  a = privdataA;  error: not accessible
         a = protdataA;
         a = pubdataA;
    }
};

int main()
{
    int a;

    B objB;
  //  a = objB.privdataA       error: not accessible
   // a = objB.protdataA;      error: not accessible
    a = objB.pubdataA;

    C objC;
   // a= objC.privdataA;       error : not accessible
  //  a= objC.protdataA;       error : not accessible
  //  a= objC.pubdataA;        error : not accessible (A private to C)

    return 0;
}