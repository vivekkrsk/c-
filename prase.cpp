// oraise.cpp
// evalute arthimetic expression composed of one digit number

#include <iostream>
#include <cstring>
using namespace std;

const int LEN = 80;
const int MAX = 40;

class Stack
{
private:
    char st[MAX];
    int top;

public:
    Stack()
    {
        top = 0;
    }
    void push(char var)
    {
        st[++top] = var;
    }
    char pop()
    {
        return st[top--];
    }
    int gettop()
    {
        return top;
    }
};

class express
{
private:
    Stack s;
    char *pstr;
    int len;

public:
    express(char *ptr)
    {
        pstr = ptr;
        len = strlen(pstr);
    }
    void prase();
    int solve();
};

void express::prase()
{
    char ch;
    char lastval;
    char lastop;

    for (int i = 0; i < len; i++)
    {
        ch = pstr[i];

        if (ch >= '0' && ch <= '9')
        {
            s.push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            if (s.gettop() == 1)
            {
                s.push(ch);
            }

            else
            {
                lastval = s.pop();
                lastop = s.pop();

                if ((ch == '*' || ch == '/') && (lastop == '+' || lastop == '-'))
                {
                    s.push(lastop);
                    s.push(lastval);
                }
                else
                {
                    switch (lastop)
                    {
                    case '+':
                        s.push(s.pop() + lastval);
                        break;
                    case '-':
                        s.push(s.pop() - lastval);
                        break;
                    case '*':
                        s.push(s.pop() * lastval);
                        break;
                    case '/':
                        s.push(s.pop() / lastval);
                        break;
                    default:
                        cout << "\nUnlnown oer";
                        exit(1);
                    }
                }
                s.push(ch);
            }
        }
        else
        {
            cout << "\nUnknown operator";
            exit(1);
        }
    }
}

int express::solve()
{
    char lastval;
    while (s.gettop() > 1)
    {
        lastval = s.pop();
        switch (s.pop())
        {
        case '+':
            s.push(s.pop() + lastval);
            break;
        case '-':
            s.push(s.pop() - lastval);
            break;
        case '*':
            s.push(s.pop() * lastval);
            break;
        case '/':
            s.push(s.pop() / lastval);
            break;
        default:
            cout << "\nUnlnown oer";
            exit(1);
        }
    }
    return int(s.pop());
}

int main()
{
    char ans;
    char string[LEN];

    cout << "\nEnter an arithmetic expression"
            "\nof form 2+3*4/3-2.\nNO number may have more than one digit."
            "\nDont use any spaces or parentheses.";

    do
    {
        cout << "\nEnter expression: ";
        cin >> string;
        express *eptr = new express(string);
        eptr->prase();
        cout << "\nThe numerical value is: " << eptr->solve();
        delete eptr;
        cout << "\nDo another (Enter y or n)? ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}