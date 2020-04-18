#include <iostream>
#include<bits/stdc++.h>
#include"UserException.h"
using namespace std;


int main()
{

int a=0;
int b=1;

try
{
    if(a==0)
        throw DevideByZero("devide by zero excetion");

    if(b==0)
         throw 5;

   int c= b/a;
   cout<<"c is "<<c<<endl;
}
catch(DevideByZero d)
{

    d.what();
}
catch(const int c)
{
    cout<<"excetion no is "<<c<<endl;
}



    return 0;
}
