// oline.cpp
// file output  with string 

#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("TEST.TXT");
    
    outfile <<"I fear thee, ancient Mariner!\n";
    outfile << "I ferar  thy skinny hand\n";
    outfile <<"And thou art long, and lank, and brown,\n";
    outfile <<"As is  the ribbed sea sand.\n";

    return 0;
}