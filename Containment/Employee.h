#include<bits/stdc++.h>
#include "Cdate.h"

class Employee
{
    int id;
    string name;
    int salary;
    cdate date;

public:
    Employee()
    {
        id=0;
        name="none";
        salary=0;
    }
    /// member intilization list
Employee(int id, string name,int salary, int day,int month,int year):date(day,month,year)
    {
        cout<<"parameterised of  Employee "<<endl;
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void display();
    void show_count();

};

void Employee::display()
{
    cout<<"display of employee "<<endl;
    cout<<" id "<<id<<endl;
    cout<<" name "<<name<<endl;
    cout<<" salary "<<salary<<endl;
date.display();
}

void Employee::show_count()
{
    cout<<"show_count from employee "<<endl;
 date.show_count();
}


