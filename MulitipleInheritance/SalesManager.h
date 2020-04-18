#include "Employee.h"

class salesManager: virtual public Employee
{
    int tr_petrol,fo_dinner;

public:
    salesManager();
    salesManager(int tr_petrol,int fo_dinner);
    void display();
    void salesManager_specific_function();
};

salesManager::salesManager()
{
     this->tr_petrol=0;
     this->fo_dinner=0;
}

salesManager::salesManager(int tr_petrol,int fo_dinner)
{
    cout<<"constructor of salesManager "<<endl;
     this->tr_petrol=tr_petrol;
     this->fo_dinner=fo_dinner;
}

void salesManager::display()
{
    cout<<"dislay form salesManager "<<endl;
    cout<<" tr_petrol "<<this->tr_petrol<<endl;
        cout<<" fo_dinner "<<this->fo_dinner<<endl;

}

void salesManager::salesManager_specific_function()
{
    cout<<"sales_specific_function "<<endl;
}


