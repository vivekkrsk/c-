// parts.cpp
// uses parts inventory to demostrate structures

#include <iostream>
using namespace std;

struct part
{
    int modelnumber;
    int partnumber;
    float cost;
};


int main()
{
    part part1;

    part1.modelnumber = 6244;
    part1.partnumber = 373;
    part1.cost = 217.55F;

    cout << "Model "  << part1.modelnumber;
    cout << ", part "  << part1.partnumber;
    cout << ", cost $" << part1.cost << endl;

    return 0;
}