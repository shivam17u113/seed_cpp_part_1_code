#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
cout<<"basic"<<endl;
int a=1;
int b=0;

try
{
    if(a==0)
        throw "a is zero";

    if(b==0)
         throw 5;

   int c= b/a;
   cout<<"c is "<<c<<endl;
}
catch(const char * c)
{
    cout<<c;
}
catch(const int c)
{
    cout<<"excetion no is "<<c<<endl;
}



    return 0;
}
