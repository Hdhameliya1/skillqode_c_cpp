#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"\n base calss is invoked"<<endl;
    }
};
class derived :public base{
    public:
    void display()
    {
       cout<<" derived class is invoked"<<endl;
    }
};
int main()
{
    //derived d;
    //d.display();

    base *p,b;
    derived d;
    p = &b;  //base
    p->display(); ///->point to
    p=&d;   //derived
    p->display();

    //base b;
    //b.display();
}
