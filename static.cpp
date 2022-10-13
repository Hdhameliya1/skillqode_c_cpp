#include<iostream>
using namespace std;
class statcount
{
    public:
    static int stcount;
    void setcount(int a)
    {
        stcount=a;
    }
    void counter()
    {
        stcount++;
    }
    void getcount()
    {
        cout<<"\n"<<stcount;
    }
};
int statcount::stcount=0;
int main()
{
    statcount obj1,obj2,obj3;
    obj1.setcount(10);
    obj2.counter();
    obj3.getcount();
    obj1.getcount();
    cout<<"\n static :- "<<statcount::stcount;

}