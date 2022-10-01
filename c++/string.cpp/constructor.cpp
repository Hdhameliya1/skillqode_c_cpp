/*#include <iostream>
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
}*/
#include <iostream>
using namespace std;
class bank
{
    int accountbalance, withdrawbalance,dipositebalanace;

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
        depositblance();
        cout << "\n";
    }
    void withdrawblance()
    {
        cout << "\n enter withdrawbalance :-..";
        cin >> withdrawbalance;
        withdrawbalance = accountbalance - withdrawbalance;
        cout << "totalbalance:-.." << withdrawbalance;
    }
    void depositblance()
    {
         cout << "\n enter dipositebalanace :-..";
         cin >> dipositebalanace;
         dipositebalanace = withdrawbalance + dipositebalanace;
         cout << "totalbalance:-.." <<dipositebalanace<<withdrawbalance;
    }
};
int main()
{
    bank person1(1500), person2(5000), person3;
    person1.showaccountbalance();
    person2.showaccountbalance();
    person3.showaccountbalance();
}
/*#include <iostream>
#include <string>
using namespace std;
class Shyam
{
    int salary, workinghvr, bonus, hvr, totalhvr;
    string emplname;

public:
    void Employeename()
    {
        cout << "Enter Employee Name : ";
        cin >> emplname;
    }

    void TotalHour()
    {
        cout << "Enter Total month Hvr (176 hvr total):";
        cin >> hvr;
    }
    void EmplSalary()
    {
        salary = hvr * 125;
    }
    void YearlyHvr()
    {
        totalhvr = salary * 12;
    }
    void YearlyBonus()
    {
        bonus = totalhvr * 10 / 100;
    }

    void GetSalary()
    {

        cout << "Total mothly Salary : " << salary;
        cout << "\nTotal Yearly Salary :" << totalhvr;
        cout << "\nTotal Diwali Bonus :" << bonus;
    }
};
int main()
{
    Shyam emp1;
    emp1.Employeename();
    emp1.TotalHour();
    emp1.EmplSalary();
    emp1.YearlyHvr();
    emp1.YearlyBonus();
    emp1.GetSalary();
}*/
