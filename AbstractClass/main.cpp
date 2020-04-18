
#include "Shape.h"

class Circle:public shape
{

    int r;
    int result;
public:
void area();
void display();
Circle()
{
    this->r=0;
        this->result=0;
}
Circle(int r)
{
    this->r=r;
    this->result=0;
}
};

void Circle :: display()
{
    cout<<" radious is "<<this->r<<endl;
    cout<<"area is  "<<this->result<<endl;
}

void Circle::area()
{
    cout<<" in area of circle "<<endl;
    this->result=this->r*this->r;
}

int main()
{

Circle c(5);
c.area();
c.display();
c.display_shape();

/// pointer of abstract class is created
shape *y;
y=&c;
/// this pointer can call only methods from abstract class which are non virtual
y->area();


    return 0;
}




