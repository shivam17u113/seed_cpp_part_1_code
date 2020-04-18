#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
concepts covered
1. member functions (accessor, mutatior , falicitator, helper)
2.static key word
3.const key word
4. this key word
5. dynamically created
6. constructor overloading
7.destructor
*/


class Basics
{
private:
    int day,month,year;
    static int count;

public:
    void set_day(int day);
    void set_month(int month);
    void set_year(int year);
        Basics();
        Basics(int day,int month,int year);
        void display() const;
         static void show_count();
 ~Basics()
 {
  cout<<"destructor is called "<<endl;
 }

};

    void Basics::set_day(int day)
    {
        this->day=day;
    }
    void Basics::set_month(int month)
    {
        this->month=month;
    }

    void Basics::set_year(int year)
    {
        this->year=year;
    }

    /// default const
    Basics::Basics()
    {
        count++;
        cout<<"defalut constructor "<<endl;
        this->day=this->month=this->year=0;
    }

    /// paramatersid constructor
Basics::Basics(int day,int month,int year)
{
    count++;
    cout<<"paramterised constructor "<<endl;
    this->day=day;
    this->month=month;
    this->year=year;
}

/// constant member function
void Basics:: display() const
{
    cout<<"day  "<<this->day<<" month  "<<this->month<<" year "<<this->year<<endl;
}

 int Basics::count=0;

 /// static member function
void Basics:: show_count(){

cout<<"count is "<<count<<endl;
}

int main()
{
    cout<<"part1 "<<endl;
   Basics b1;
    Basics::show_count();
        b1.display();

   Basics b2(12,12,12);
   Basics::show_count();
        b2.display();

        cout<<"calling mutator function  on b1 "<<endl;
        b1.set_day(11);
        b1.display();

        cout<<"const object "<<endl;
   const  Basics b3(8,8,1999);
         b3.display();

         cout<<"dynamically created object "<<endl;
         Basics * b4 = new Basics(7,7,1997);
         b4->display();



    return 0;
}


