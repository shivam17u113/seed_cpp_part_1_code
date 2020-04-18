#include <iostream>
using namespace std;
#include "SalesPerson.h"
class Manager:public salesEmployee, public salesManager
{
    int extra_work,project_work;

public:
    Manager();
    Manager(int extra_work,int project_work,
             int tr_petrol,int fo_dinner,
             int tr_all,int fo_all,
             int id, string name,int salary
             );
    void display();
    void Manager_specific_function();
};

Manager::Manager()
{
     this->extra_work=0;
     this->project_work=0;
}

Manager::Manager(int extra_work,int project_work,
             int tr_petrol,int fo_dinner,
             int tr_all,int fo_all,
             int id, string name,int salary
             ):Employee(id,name,salary),salesEmployee(tr_all,fo_all),salesManager(tr_petrol,fo_dinner)
{
     this->extra_work=extra_work;
     this->project_work=project_work;
}

void Manager::display()
{
    cout<<"dislay form Manager "<<endl;
    cout<<" tr_petrol "<<this->extra_work<<endl;
        cout<<" fo_dinner "<<this->project_work<<endl;

}

void Manager::Manager_specific_function()
{
    cout<<"sales_specific_function "<<endl;
}







int main()
{
Manager m(1,2,13,14,25,26,111,"ankita",10000);
m.display();

m.salesManager::display();

m.Employee::display();

m.Employee_specific_function();
    return 0;
}
