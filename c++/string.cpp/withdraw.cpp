/*#include <iostream>
using namespace std;
class bank
{
    int accountbalance, withdrawbalance;

public:
    bank()
    {
        accountbalance = 1000;
        cout << "\n default constructor called..";
    }
    bank(int initbal)
    {
        accountbalance = initbal;
        cout << "\n parameterlized constructor called...";
    }
    void showaccountbalance()
    {
        cout << "\n account balance :-.." << accountbalance;
        withdrawblance();
        cout << "\n";
    }
    void withdrawblance()
    {
        cout << "\n enter withdrawbalance :-..";
        cin >> withdrawbalance;
        withdrawbalance = accountbalance - withdrawbalance;
        cout << "totalbalance:-.." << withdrawbalance;
    }
};
int main()
{
    bank person1(1500), person2(5000), person3;
    person1.showaccountbalance();
    person2.showaccountbalance();
    person3.showaccountbalance();
}*/
#include <iostream>
using namespace std;
class sum{
    public:
    sum(int,int);
    sum(int,int,int);
    sum(double,double);
    sum(double,double,double);
};
        sum::sum(int a,int b)
        {
        cout<<"two para int a+b :-"<<a+b<<endl;
        }
        sum::sum(int a,int b,int c)
        {
        cout<<"two para int a+b+c :-"<<a+b+c<<endl;
        }
        sum::sum(double a,double b)
        {
        cout<<"two para int a+b :-"<<a+b<<endl;
        }
        sum::sum(double a,double b,double c)
        {
        cout<<"two para int a+b+c :-"<<a+b+c<<endl;
        }
int main()
{
    sum obj1(10,20),obj2(10,20,30),obj3(10.1,20.1),obj4(10.1,20.1,30.1);
}