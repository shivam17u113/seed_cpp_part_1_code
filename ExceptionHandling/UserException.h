
#include<bits/stdc++.h>
#include<string>
using namespace std;

class DevideByZero
{
    char *message;

public:

    DevideByZero()
    {

    }

    DevideByZero(const char * c)
    {
        int len=strlen(c);
        message= new char[len+1];
        strcpy(message,c);

    }
    void what()
    {
        cout<<message<<endl;
    }



};
