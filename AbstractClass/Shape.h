#include<bits/stdc++.h>
using namespace std;
 class shape
{
int x,y,z;

public:
  virtual void area()=0;

    void display_shape()
    {
        cout<<"in display of shape "<<endl;
    }
    shape()
    {
        x=0;
        y=0;
    }

};
