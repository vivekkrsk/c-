// xsyntax.cpp
// not a working program

#include <iostream>
using namespace std;

class AClass
{
    public:
    class AnError
    {

    };
    void Func()
    {
        if(/* error codition*/ true)
        {
            throw AnError();
        }
    }
};

int main()
{
    try
    {
        AClass obj1;
        obj1.Func();
    }
    catch(AClass::AnError)
    {
       // tell user about error, etc.
    }
    

    return 0;
}