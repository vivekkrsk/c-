//charvars.cpp
//demostratrates character variables

#include <iostream>
using namespace std;

int main()
{
    char charvars1 = 'A';  //define char variable as character
    char charvars2 = '\t'; //define char variable as tab

    cout << charvars1;    //display character
    cout << charvars2;   //display character
    charvars1 = 'B';       //set char variable to char constant
    cout << charvars1;     //display character
    cout << '\n';          //display newline character
    return 0;
}