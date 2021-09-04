// wdcounte.cpp
// demostrates enums, counts wirds in pharase

#include <iostream>
using namespace std;
#include <conio.h>

enum itsaWord { NO, YES };

int main()
{
    itsaWord isWord = NO;

    char ch = 'a';
    int wordcount=0;

    cout << " Enter a phrase:\n";
    do
    {
        ch =getche();
        if (ch==' ' || ch=='\r')
        {
            if (isWord == YES)
            {
                wordcount++;
                isWord = NO;
            }
            
        }
        else if ( isWord == NO )
        isWord = YES;
        
    } while ( ch != '\r');
    
    cout << "\n---word count is "<< wordcount << "---\n";

    return 0;
}
