#include "Employee.h"

class salesEmployee:public Employee
{
    int tr_all,fo_all;

public:
    salesEmployee();
    salesEmployee(int tr_aa,int fo_all,int id,string name,int salary);
    void display();
    void sales_specific_function();
     void Employee_for_virtual()
     {
         cout<<"this is overloaded Employee_for_virtual from sales "<<endl;
     }
};

salesEmployee::salesEmployee()
{
     this->tr_all=0;
     this->fo_all=0;
}

salesEmployee::salesEmployee(int tr_all,int fo_all,int id,string name,int salary)
:Employee(id,name,salary)
{
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

int main()
{
salesEmployee s1(111,111,1,"ankita",10000);
Employee e1(2,"shivam",12000);
Employee *ptr;

/// this will call display from Employee not form salesEmployee
/// due to static binding
ptr=&s1;
ptr->display();

/// this will thow error as sales_specific_function is not present in Employee
//ptr->sales_specific_function();

/// this will call Employee_for_virtual from Employee even though it is overloaded
ptr->Employee_for_virtual();

/// when we make Employee_for_virtual as virtual in Employee class
/// this dynamic binding takes place and function form salesEmployee got called

Employee *ptr2;
ptr2=&e1;
ptr2->display();
/// for this dynamic binding refers to Employee only so that this will call Employee_for_virtual
/// from Employee
ptr2->Employee_for_virtual();

//s1.display();
    return 0;
}

