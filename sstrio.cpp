// sstrio.cpp
// string class input/output

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string full_name, nickname, address;
    string greeting("Hello, ");

    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Your full name is: " << full_name << endl;

    cout << "Enter your nickname: ";
    cin >> nickname;

    greeting += nickname;
    cout << greeting << endl;

    cout << "Enter your address on seprate lines\n";
    cout << "Terminate with '$'\n";
    getline(cin, address, '$');
    cout << "Your address is: " << address << endl;

    return 0;
}