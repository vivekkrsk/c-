// sstrchar.cpp
// accessing characters in string objects
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char charray[80];
    string word;

    cout << "Enter a word: ";
    cin >> word;
    int wlen = word.length();

    cout << "One character at a time: ";
    for (int i = 0; i < wlen; i++)
    {
        cout << word.at(i);
      //  cout << word[j]            no warning if out of wounds
    }

    word.copy(charray, wlen,0);
    charray[wlen] = 0;
    cout << "\nArray contains: " << charray << endl;

    return 0;
}
