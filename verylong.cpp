// verylong.cpp
// implements verylong integer type

#include "verylong.h"

void verylong::putvl() const
{
    char temp[SZ];
    strcpy(temp, vlstr);
    cout << strrev(temp);
}

void verylong::getvl()
{
    cin>>vlstr;
    vlen = strlen(vlstr);
    strrev(vlstr);
}

verylong verylong::operator+ (const verylong v)
{
    char temp[SZ];
    int i;

    int maxlen = (vlen > v.vlen)? vlen:v.vlen;
    int carry =0;
    for (int i = 0; i < maxlen; i++)
    {
        int d1 = (i>vlen-1)? 0: vlstr[i]-0;
        int d2 = (i>v.vlen-1)? 0: vlstr[i]-0;
        int digitsum = d1 +d2 +carry;
        if (digitsum>=10)
        {
            digitsum -=10;
            carry=1;
        }
        else
        carry = 0;
        temp[i] = digitsum+'0';
        
    }
    if(carry==1)
    temp[i++] = '1';
    temp[i] = '\0';
    return verylong(temp);
}

verylong verylong::operator * (const verylong v)
{
    verylong pprod;
    verylong tempsum;
    for (int  i = 0; i < v.vlen; i++)
    {
        int digit = v.vlstr[i]-'0';
        pprod = multdigit(digit);
        for(int k=0; k<i; k++)
        {
            pprod = mult10(pprod);
        }
        tempsum = tempsum +pprod;
    }
    return tempsum;
    
}

verylong verylong::mult10( const verylong v) const
{
    char temp[SZ];
    for (int i =v.vlen-1; i >=0; i--)
    {
        temp[i+1] = v.vlstr[i];
    }
    temp[0] = '0';
    temp[v.vlen+1]= '\0';\
    return verylong(temp);
    
}

verylong verylong:: multdigit(const int d2) const
{
    char temp[SZ];
    int i, carry=0;
    for (int i = 0; i < vlen; i++)
    {
        int d1 = vlstr[i]-'0';
        int digitprod = d1*d2;
        digitprod += carry;
        if (digitprod >= 10)
        {
            carry = digitprod/10;
            digitprod -= carry*10;
        }
        else
        carry =0;
        temp[i] = digitprod+'0';
        
    }
    if (carry!=0)
    {
        temp[i++]= carry+'0';
    }
    temp[i] = '\0';
    return verylong(temp);
    
    
}