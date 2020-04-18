#include<bits/stdc++.h>
using namespace std;
class cdate
{
private:
    int day,month,year;
    static int count;

public:
    void set_day(int day);
    void set_month(int month);
    void set_year(int year);
        cdate();
        cdate(int day,int month,int year);
        void display() const;
         static void show_count();
 ~cdate()
 {
 // cout<<"destructor is called from cdate"<<endl;
 }

};

    void cdate::set_day(int day)
    {
        this->day=day;
    }
    void cdate::set_month(int month)
    {
        this->month=month;
    }

    void cdate::set_year(int year)
    {
        this->year=year;
    }

    /// default const
    cdate::cdate()
    {
        count++;
      //  cout<<"defalut constructor from c date "<<endl;
        this->day=this->month=this->year=0;
    }

    /// paramatersid constructor
cdate::cdate(int day,int month,int year)
{
    count++;
    cout<<"paramterised constructor of date "<<endl;
    this->day=day;
    this->month=month;
    this->year=year;
}

/// constant member function
void cdate:: display() const
{
    cout<<"display of cdate "<<endl;
    cout<<"day  "<<this->day<<" month  "<<this->month<<" year "<<this->year<<endl;
}

 int cdate::count=0;

 /// static member function
void cdate:: show_count(){

cout<<" show_count from cdate "<<endl;
cout<<"count is "<<count<<endl;
}
