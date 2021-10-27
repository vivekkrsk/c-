// landlord.h

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>
using namespace std;

//--------------Global methods-----------------
void getaLine(string& inStr);
char getChar();

//----------------class tenant-------------------
class tenant
{
    private:
    string name;
    int aptNumber;

    public:
    tenant(string n, int aNo);
    ~tenant();
    int getAptNmber();
    friend bool operator < (const tenant&, const tenant&);
    friend bool operator == (const tenant&, const tenant&);
    friend ostream& operator << (ostream&, const tenant&);
};

//-------------------class compareTenant------------------

class compareTenants
{
    public:
    bool operator () (tenant*,tenant*) const;
};

//------------------class tenantList---------------------

class tenantList
{
    private:
    set<tenant*, compareTenants> setPtrsTens;
    set<tenant*, compareTenants> ::iterator iter;

    public:
    ~tenantList();
    void insertTenant(tenant*);
    int getAptNo(string);
    void display();
};

//---------------class  tenantInputScreen------------

class tenantInputScreen
{
   private:
   tenantList* ptrTenantList;
   string tName;
   int aptNo;

   public:
   tenantInputScreen(tenantList* ptrTL): ptrTenantList(ptrTL)
   { }
   void getTenant();
};

// ------------ class rentRow ----------------

class rentRow
{
    private:
    int aptNo;
    float rent[12];

    public:
    rentRow(int);
    void setRent(int, float);
    float getSumofRow();
    friend bool operator < (const rentRow&, const rentRow&);
    friend bool operator == (const rentRow&, const rentRow&);
    friend ostream& operator << (ostream&, const rentRow&);
};

//----------------------------------------------------------

class compareRows
{
    public:
    bool operator() (rentRow*, rentRow*) const;
};

//--------------------- class rentRecord --------------------

class rentRecord
{
    private:
    set<rentRow*, compareRows> setPtrsRR;
    set<rentRow*, compareRows> :: iterator iter;

    public:
    ~rentRecord();
    void insertRent(int, int, float);
    void display();
    float getSumOfRents();
};

//----------------- class rentInputScreen---------------------

class rentInputScreen
{
    private:
    tenantList* ptrTenatList;
    rentRecord* ptrRentRcord;

    string renterName;
    float rentPaid;
    int month;
    int aptNo;

    public:
    rentInputScreen(tenantList* ptrTL, rentRecord* ptrRR):ptrTenatList(ptrTL), ptrRentRcord(ptrRR)
    { }
    void getRent();
};

//----------------------- class expense ----------------------

class expense
{
    public:
    int month,day;
    string category,payee;
    float amount;
    expense()
    { }
    expense(int m, int d, string c, string p, float a):month(m), day(d),category(c), payee(p), amount (a)
    { }
    friend bool operator < (const expense&, const expense&);
    friend bool operator == (const expense&, const expense&);
    friend bool operator << (const expense&, const expense&);
};

//----------------------------------------------------------------

class compareDates
{ 
    public:
    bool operator () (expense*, expense*) const;
};

//------------------------------------------------------------------

class compareCategories
{
    public: bool operator () (expense*, expense*) const;
};

//------------------ class expenseRecord ----------------------------

class expenseRecord
{
    private:
    vector<expense*>vectPtrsExpenses;
    vector<expense*>::iterator iter;

    public:
    ~expenseRecord();
    void insertExp(expense*);
    void display();
    float displaySummary();
};

//------------------ class expenseInputScreen -----------------------

class expenseInputScreen
{
    private:
    expenseRecord* ptrExpenseRecord;

    public:
    expenseInputScreen(expenseRecord*);
    void getExpense();
};

//-------------------- class annualReport ---------------------------

class annualReport
{
    private:
    rentRecord* ptrRR;
    expenseRecord* ptrER;
    float expenses, rents;

    public:
    annualReport(rentRecord*, expenseRecord*);
    void display();
};

//------------------- class userInterface ---------------------------

class userInterface
{
    private:
    tenantList*         ptrTenantList;
    tenantInputScreen*  ptrTenantInputscreen;
    rentRecord*         ptrrentRecord;
    rentInputScreen*    ptrRentInputScreen;
    expenseRecord*      ptrExpenseRecord;
    expenseInputScreen* ptrExpenseInputScreen;
    annualReport*       ptrAnnualReport;
    char ch;

    public:
    userInterface();
    ~userInterface();
    void interact();
};

//------------------ end of landlord.h file-------------------------