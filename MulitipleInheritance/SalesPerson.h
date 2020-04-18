#include "SalesManager.h"

class salesEmployee: virtual public Employee
{
    int tr_all,fo_all;

public:
    salesEmployee();
    salesEmployee(int tr_aa,int fo_all);
    void display();
    void sales_specific_function();
};

salesEmployee::salesEmployee()
{
     this->tr_all=0;
     this->fo_all=0;
}

salesEmployee::salesEmployee(int tr_all,int fo_all)
{
        cout<<"constructor of salesEmployee "<<endl;
     this->tr_all=tr_all;
     this->fo_all=fo_all;
}

void salesEmployee::display()
{
    cout<<" tr_all "<<this->tr_all<<endl;
        cout<<" fo_all "<<this->fo_all<<endl;

}

void salesEmployee::sales_specific_function()
{
    cout<<"sales_specific_function "<<endl;
}


