// pattern5.cpp

#include <iostream>
using namespace std;

int main()
{
    for (int j = 1; j < 10; j++)
    {
        if (j <= 3)
        {
            for (int i = 0; i < (10 - j); i++)
            {
                cout << " ";
            }
            for (int i = 0; i < j; i++)
            {
                cout << " *";
            }
            cout << endl;
        }

        else if (j == 4)
        {
            int k = 0;
            for (int l = 1; l < 4; l++)
            {
                for (int i = 0; i < k; i++)
                {
                    cout << " ";
                }
                for (int i = 0; i < (10 - k); i++)
                {
                    cout << " *";
                }
                cout << endl;
                k++;
            }
        }
        else if (j==7)
        {
             for (int i = 0; i <= (2); i++)
                {
                    cout << " ";
                }
                for (int i = 0; i < (7); i++)
                {
                    cout << " *";
                }
                cout << endl;
        }
        
        else if (j == 8)
        {
             int k = 1; 
            for (int j = 1; j <= 4; j++)
            {
                
                for (int i = 0; i <= (2 - k); i++)
                {
                    cout << " ";
                }
                for (int i = 0; i < (4 - k); i++)
                {
                    cout << " *";
                }
                for (int i = 0; i < k; i++)
                {
                    cout << "  ";
                }
                for (int i = 0; i < k-1; i++)
                {
                    cout << "  ";
                }
                for (int i = 0; i < k; i++)
                {
                    cout << "  ";
                }
                for (int i = 0; i < (4 - k); i++)
                {
                    
                    cout << " *";
                }
                cout << endl;
                k++;
            }
        }
    }

    return 0;
}