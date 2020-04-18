#include<bits/stdc++.h>

using namespace std;

class Complex {

private:
    int r,m;
    char *str;

public:
    Complex();
    Complex(int r,int m,const char * );
    Complex(const Complex &);

    void Display() const;

    Complex operator +(const Complex & );
    Complex operator -();
    Complex& operator =(const Complex &);

    int str_len(string s)
    {
        int i=0;
        while(s[i]!='\0')
        {
            i++;
        }
        return i;
    }

char * string_copy(string s)
{
    int len=str_len(s);
    char * str= new char[len+1];
    int i=0;

    while(s[i]!='\0')
    {
        str[i]=s[i];
        i++;
    }
    str[i]='\0';
    return str;
}

/// concatinate two strings
    char * string_concat(string s1, string s2)
    {
        int len1= str_len(s1);
        int len2= str_len(s2);
        int len =len1+len2;
        char * str= new char[len+1];

       int i=0,j=0,k=0;
       while(s1[i]!='\0')
       {
           str[k]=s1[i];
           i++;
           k++;
       }
       while(s2[j]!='\0')
       {
           str[k]=s2[j];
           j++;
           k++;
       }
       str[k]='\0';
        return str;
    }

    /// Destrcutor
    ~ Complex()
    {
       cout<<"destructor is called "<<endl;
    }
};

/// default constructor
Complex::Complex()
{
    this->r=this->m=1;
    this->str= new char;
    this->str=string_copy("\0");
}
/// parameterised constructor
Complex::Complex(int r,int m,const char* s)
{
    this->r=r;
    this->m=m;
    int len= str_len(s);
    this->str= new char [len+1];
   this->str= string_copy(s);
}

/// copy construcor
Complex :: Complex(const Complex & c)
{
   cout<<"copy constructor "<<endl;
  this->r=c.r;
  this->m=c.m;

  delete this->str;

  int len =str_len(c.str);
this->str= new char[len+1];
 this->str= string_copy(c.str);


}



void Complex::Display() const
{
    cout<<"stirng number is  "<<this->str<<"   real part "
    <<this->r<<" imag part "<<this->m<<endl;
}


/// + operator is overloaded
Complex Complex::operator +(const Complex & c)
{
    Complex temp;
    temp.r= this->r+c.r;
    temp.m=this->m+c.m;

     delete  temp.str;

    string cp2 =string_concat(this->str,"+");

    string d=c.str;
    string cp=string_concat(cp2,c.str);

    int len=str_len(cp);
    temp.str= new char[len+1];
   temp.str= string_copy(cp);

    return temp;
}

/// - unary operator overloading
Complex Complex::operator -()
{
    Complex temp;
    temp.r=-this->r;
    temp.m=- this->m;

    delete  temp.str;
    string cp2= string_concat(this->str,"-");
    int len =str_len(cp2);
    temp.str= new char[len+1];
    temp.str=string_copy(cp2);
    return temp;
}

Complex& Complex::operator=(const Complex & c)
{
    this->r=c.r;
    this->m=c.m;

    delete this->str;
    int len= str_len(c.str);
    this->str= new char[len+1];
    this->str=string_copy(c.str);

    return(*this);
}

int main()
{

cout<<" c1 object parametrised"<<endl;
Complex c1(1,1,"first");
c1.Display();

cout<<" c2 object parametrised "<<endl;
Complex c2 (2,3,"second");
c2.Display();

/// + operator is overloaded
cout<<" c3 object + overloaded"<<endl;
Complex c3;
c3 = c1+c2;
c3.Display();

/// - unary operator overloaded
cout<<" c4 object uniary operator"<<endl;
Complex c4=-c3;
c4.Display();

cout<<" c6 object copy constructor"<<endl;
Complex c6=c3;
c6.Display();

cout<<"c7 = overloaded "<<endl;
Complex c7;

c7=c2;
c7.Display();

    return 0;
}





