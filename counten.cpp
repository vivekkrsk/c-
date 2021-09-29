// counten.cpp
// inheritance with Counterr class

#include <iostream>
using namespace std;

class Counter
{
protected:
    unsigned int count;

public:
    Counter() : count(0)
    {
    }
    Counter(int c) : count(c)
    {
    }
    unsigned int getcount() const
    {
        return count;
    }
    Counter operator++()
    {
        return Counter(++count);
    }
};

class CountDn : public Counter
{
public:
    Counter operator -- ()
    {
        return Counter(--count);
    }
};

int main()
{
    CountDn c1;

    cout << "\nc1 = " << c1.getcount();

    ++c1;
    ++c1;
    ++c1;
    cout << "\nc1 = " << c1.getcount();

    --c1;
    --c1;
    cout << "\nc1 = " << c1.getcount();
    cout << endl;

    return 0;
}