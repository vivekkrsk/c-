// dothis.cpp
// the this pointer reffering to data

#include <iostream>
using namespace std;

class what 
{
    private:
    int alpha;
    public:
    void tester()
    {
        this->alpha = 11;
        cout << this ->alpha;
    }
};

int main()
{
    what w;
    w.tester();
    cout << endl;

    return 0;
}