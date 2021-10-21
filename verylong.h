//verylong.h
// class specifier for very long number

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

const int SZ = 1000;

class verylong
{
    private:
    char vlstr[SZ];
    int vlen;
    verylong multdigit(const int) const;
    verylong mult10(const verylong) const;

    public:
    verylong() : vlen(0)
    { vlstr[0] ='\0'; }
    verylong( const char s[SZ])
    {strcpy(vlstr, s); vlen=strlen(s); }
    verylong(const unsigned long n)
    {
        ltoa(n, vlstr, 10);
        strrev(vlstr);
        vlen=strlen(vlstr);
    }
    void putvl() const;
    void getvl();
    verylong operator + (const verylong);
    verylong operator * (const verylong);
};
