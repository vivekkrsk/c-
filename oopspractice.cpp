#include <iostream>
using namespace std;

class mechatronics
{
    private:
      float fm;
      int pno;

    public:
      int roll, marks;

      void presonaldetail(); //declaration
      void publicdetail()
      {
          cout << "Enter your roll number: ";
          cin >> roll;
          

          cout << "Enter your marks: ";
          cin >> marks;
           
      }

      void printdetail();
};

void mechatronics :: presonaldetail()
{
    cout << "Enter your family income: ";
    cin >> fm;

    cout << "Enter your phone number: ";
    cin >> pno;

    cout << fm <<endl;
    cout<< pno <<endl;

}

int main()
{
   mechatronics xyz;
   int a,b;

   xyz.publicdetail();
   xyz.presonaldetail();
   xyz.printdetail();

    return 0;
}

void mechatronics :: printdetail()
{
   cout << "Your family income is: "<<fm << endl;          
   cout << "Your Phone number is is: "<<pno << endl;       
   cout << "Your Roll Number is is: "<<roll << endl;
   cout << "Your Marks is: "<<marks << endl << endl;

}