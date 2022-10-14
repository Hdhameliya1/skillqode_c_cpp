#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"\n A constuctor called .... ";
    }
   /* ~A()
    {
        cout<<"\n A destructor called...";
    }*/
};
class B :public A{
    public:
    B()
    {
        cout<<"\n B constructor called ...";
    }
};
/*class C :public B{
    public:
   C()
    {
        cout<<"\n C constructor called ...";
    }
};*/
int main()
{
  B b1,b2,bn;
}