// deque.cpp
// demostrates push_back(), push_front(), front()

#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> deq;

    deq.push_back(30);
    deq.push_back(40);
    deq.push_back(50);
    deq.push_front(20);
    deq.push_front(10);

    deq[2] = 33;

    for (int i = 0; i < deq.size(); i++)
    {
        cout << deq[i] << ' ';
    }
    cout << endl;
    
    return 0;
}