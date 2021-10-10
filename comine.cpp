// comline.cpp
// demostrate command-line arguments

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "\nargc = " << argc << endl;

    for (int i = 0; i < argc; i++)
    {
        cout << "Argument " << i << " = "<< argv[i] << endl;
    }
    

    return 0;
}