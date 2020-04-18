#include"Employee.h"

class salesEmployee:public Employee
{
    int travling_allounce,food_allounce;

public:
    salesEmployee()
    {
        this->travling_allounce=0;
        this->food_allounce=0;
    }
    salesEmployee(int travling_allounce,int food_allounce,int id,
                  string name,int salary, int day,int month,int year)
                  :Employee(id,name,salary,day,month,year)
                  {
                      cout<<"paramterised of salesEmployee "<<endl;
                      this->travling_allounce=travling_allounce;
                      this->food_allounce=food_allounce;
                  }

        void display();
};

void salesEmployee::display()
{
    Employee::display();
        cout<<"display of sales employee "<<endl;
    cout<<"travelling allounce "<<this->travling_allounce<<endl;
    cout<<" food allounce  "<<this->food_allounce<<endl;
}


int main()
{
  /*  cout<<"default constructor "<<endl;
salesEmployee e1;
e1.display();*/

//cout<<"parametrised constructor "<<endl;
salesEmployee e2(400,500,1,"ankita",10000,25,2,2000);
e2.display();

e2.show_count();
    return 0;
}



