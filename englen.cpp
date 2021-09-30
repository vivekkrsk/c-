// englen.cpp
// inheritance using English Distance

#include <iostream>
using namespace std;

enum posneg
{
    pos,
    neg
};

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0)
    {
    }
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void getdist()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << '\"';
    }
};

class distsign : public Distance
{
private:
    posneg sign;

public:
    distsign() : Distance()
    {
        sign = pos;
    }

    distsign(int ft, float in, posneg sg = pos) : Distance(ft, in)
    {
        sign = sg;
    }

    void getdist()
    {
        Distance ::getdist();
        char ch;
        cout << "Enter sign (+ or -): ";
        cin >> ch;
        sign = (ch == '+') ? pos : neg;
    }
    void showdist() const
    {
        cout << ((sign == pos) ? "(+)" : "(-)");
        Distance::showdist();
    }
};

int main()
{
    distsign alpha;
    alpha.getdist();

    distsign beta(11, 6.25);

    distsign gamma(100, 5.5, neg);

    cout << "\nalpha = ";
    alpha.showdist();
    cout << "\nbeta = ";
    beta.showdist();
    cout << "\ngamma = ";
    gamma.showdist();

    return 0;
}