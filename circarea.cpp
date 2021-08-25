// circarea.cpp
//demostrate floating point number

#include <iostream>
using namespace std;

int main()
{
    float rad;
    const float PI = 3.14159F; 

    cout << "Enter radius of circle: ";
    cin >> rad;
    float area = PI*rad*rad;
    cout << "Area is "<< area << endl;
    return 0;
}