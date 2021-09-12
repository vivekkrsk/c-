//ch6-q10

#include <iostream>
using namespace std;

class  leverage
{
private:
    int crowbar;
public:
leverage()
{crowbar=0;}
 int getcrow()
 {
     return crowbar;
 }
   
};




int main()
{
    leverage lever1;
     
     cout << lever1.getcrow();

    return 0;
}