#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"\n A constuctor called .... ";
    }
   ~A()
    {
        cout<<"\n A destructor called...";
    }
};
class B
{
   public:
    B()
    {
        cout<<"\n B constuctor called .... ";
    }
   ~B()
    {
        cout<<"\n B destructor called...";
    }
};
class C :public A,public B{
public:
   C()
    {
        cout<<"\n C constuctor called .... ";
    }
    ~C()
    {
        cout<<"\n C destructor called...";
    }
};
int main()
{
  //B b1,b2,bn;
  C c;
}