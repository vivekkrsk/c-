//  Asso_arr.cpp
// demostrates map used as associative array

#include<map>
#include<string>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    string name;
    int pop;

    string states[] = { "Wyoming", "Colorado", "Nevada", "Montana", "Arizona", "Idhao"};

    int pops[]= { 470, 2890, 800, 787, 2718, 944 };

    map<string, int, less<string> > mapststates;
    map<string, int, less<string> > :: iterator iter;

    for (int i = 0; i < 6; i++)
    {
        name = states[i];
        pop = pops[i];
        mapststates[name] = pop;
    }

    cout << "Enter state: ";
    cin >> name;
    pop = mapststates[name];
    cout << "Population: "<< pop << ",000\n";

    cout << endl;

    for (iter = mapststates.begin(); iter != mapststates.end(); iter++)
    {
        cout << (*iter).first << ' ' << (*iter).second << ",000\n";
    }
    
    

    return 0;
}