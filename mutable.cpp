// mutable.cpp

#include <iostream>
#include <string>
using namespace std;

class scrollbar
{
private:
    int size;
    mutable string owner;
public:
scrollbar(int sz, string own) : size(sz), owner(own)
{ }
void setsize(int sz)
{  size = sz; }
void setowner(string own)const
{ owner = own; }
int getsize()const
{ return size;}
string getowner() const
{ return owner;}
    
};

int main()
{
    const scrollbar sbar(60,"window1");

    //sbar.setsize(100);
    sbar.setowner("window2");

    cout << sbar.getsize()<< ", " << sbar.getowner() << endl;

    return 0;
}