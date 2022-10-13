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
class B :public A{
    public:
    B()
    {
        cout<<"\n B constructor ...";
    }
};
int main()
{
   B b;
}