#include <iostream>
#include "StackTemplate.h"
using namespace std;

int main()
{
user_stack<string> s1(5);

s1.push("shivam");
s1.push("parve");
s1.push("patil");
cout<<"popped element is \n"<<s1.pop()<<endl;
cout<<"popped element is \n"<<s1.pop()<<endl;
cout<<"popped element is \n"<<s1.pop()<<endl;
cout<<"popped element is \n"<<s1.pop()<<endl;
s1.push("spp");
cout<<"popped element is \n"<<s1.pop()<<endl;
cout<<"popped element is \n"<<s1.pop()<<endl;


    return 0;
}
