// q4-4.cpp
#include <iostream>
using namespace std;

struct time
{
    int hrs;
    int mins;
    int secs;
};


int main()
{
   time time1;

   time1.hrs=10;
   time1.mins=10;
   time1.secs=10;

   cout <<"Time is "<< time1.hrs<<"hrs " << time1.mins<<"mins " << time1.secs<<"sec"<< endl;

    return 0;
}