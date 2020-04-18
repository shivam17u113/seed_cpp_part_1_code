#include<bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    string name;
    int salary;

public:
    Employee();
    Employee(int id,string name,int salary);
    void display();
    void Employee_specific_function();

};

Employee::Employee()
{
    this->id=0;
    this->name="none";
    this->salary=0;
}


Employee::Employee(int id,string name,int salary)
{
    cout<<"construtor of Employee "<<endl;
    this->id=id;
    this->name=name;
    this->salary=salary;
}

void Employee:: display()
{
    cout<<"display of employee "<<endl;
    cout<<"id "<<this->id<<" name "<<this->name<<" salary "<<this->salary<<endl;
}

void Employee::Employee_specific_function()
{
    cout<<"employee specific function"<<endl;
}



