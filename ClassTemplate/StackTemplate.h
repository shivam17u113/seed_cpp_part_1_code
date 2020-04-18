
#include<bits/stdc++.h>
using namespace std;

template <class t>
class user_stack
{
    int top,n;
    t * arr;

public:
    user_stack();
    user_stack(int s);
    void push(t x);
     t pop();
     int is_empty_();
     int is_full_();

};
template <class t>
user_stack<t>::user_stack(int s)
{
    this->top=-1;
    this->n=s;
    this->arr= new t[n];
}
template <class t>
int user_stack<t>::is_empty_()
{
    if(this->top==-1)
        return 1;
    return 0;
}
template <class t>
int user_stack<t>::is_full_()
{
    if(this->top==this->n)
        return 1;
    return 0;
}
template <class t>
void user_stack<t>::push(t x)
{
  if(is_full_())
  {
      cout<<"stack is full"<<endl;
      return ;
  }
  else
  {
      this->top++;
      this->arr[this->top]=x;
  }

}
template <class t>
t user_stack<t>::pop()
{
    if(is_empty_())
    {
        cout<<"stack is empty "<<endl;
        /// directly exit the code
		exit(0);
    }
    else
    {
        t x;
        x= this->arr[this->top];
        this->top--;
        return x;
    }


}


