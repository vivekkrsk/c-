// statfunc.cpp
// static functions and ID for objects

#include <iostream>
using namespace std;

class gamma
{
    private: 
    static int total;
    int id;
    public:
    gamma()
    {
        total++;
        id = total;
    }
    ~gamma()
    {
        total--;
        cout << "Destroying ID number " << id << endl;
    }
    static void showtotal()
    {
        cout << "Total is "<< total << endl;
    }
    void showid()
    {
        cout << "ID number is " << id << endl;
    }
};
int gamma::total =0;
int main()
{
    gamma g1;
    gamma:: showtotal();

    gamma g2,g3;
    gamma::showtotal();

    g1.showid();
    g2.showid();
    g3.showid();

    cout << "----------end of program----------\n";

    return 0;
}