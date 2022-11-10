/*#include<iostream>
#include<string.h>
using namespace std;
class student 
{
    int r1;
    char nm[10];

    public:
     void read();
     void display();
};
class marks:public student{
    protected:
    int s1;
    int s2;
    int s3;
    
    public :
    void getmarks();
    void putmarks();

};
class result : public marks{
    int t;
    float p;
    char div[10];

    public:
        void process();
        void printresult();
};
void student::read()
{
    cout<<"\n enter roll no: - ";
    cin>>r1;
    cout<<"\n enter name :-";
    cin>>nm;
}
void student :: display()
{
    cout<<" rollno :-"<<r1;
    cout<<"name :"<<nm;
    cout<<"\n";
}
void marks ::getmarks()
{
    cout<<"\n enter marks for 3 subjects :-"<<endl;
    cin>>s1>>s2>>s3;
}
void marks:: putmarks()
{
    cout<<"subject 1"<<s1<<endl;
    cout<<"subject 2"<<s2<<endl;
    cout<<"subject 3"<<s3<<endl;
}
void result::process()
{
    t = s1+s2 +s3;
    p= t/3.0;
    p>=60?strcpy(div,"first"):p>=50?strcpy(div,"second"):strcpy(div,"third");
}
void result::printresult()
{
    cout<<"total ="<<t;
    cout<<"\n";
    cout<<"percentage ="<<p<<endl;
    cout<<"division ="<<div<<endl;

}
int main()
{
    result x;

    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
   
   return 0;
}
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int rl;
    char nm[20];
    public:
        void Read();
        void Display();
};
class Marks : public Student
{
    protected:
        int s1;
        int s2;
        int s3;
    public:
        void GetMarks();
        void PutMarks();
};
class Result : public Marks
{
        int t;
        float p;
        char div[10];
    public:
        void Process();
        void PrintResult();
};
void Student::Read()
{
    cout<<"Roll No:";
    cin>>rl;
    cout<<"Enter name:";
    cin>>nm;
}
void Student::Display()
{
    cout<<"\n Roll No:"<<rl<<endl;
    cout<<"Nmae :"<<nm<<endl;
    cout<<"\n";
}
void Marks::GetMarks()
{
    cout<<"enter marks for 3 subjects:"<<endl;
    cin>>s1>>s2>>s3;
}
void Marks::PutMarks()
{
    cout<<"Subject 1 :"<<s1<<endl;
    cout<<"Subject 2 :"<<s2<<endl;
    cout<<"Subject 3 :"<<s3<<endl;
}
void Result::Process()
{
    t=s1+s2+s3;
    p=t/3.0;
    p>=60?strcpy(div,"first"):p>=50?strcpy(div,"second"):strcpy(div,"third");
}
void Result::PrintResult()
{
    cout<<"Total="<<t<<endl;
    cout<<"\n";
    cout<<"Percentage="<<p<<endl;
    cout<<"Division="<<div<<endl;
}
int main()
{
    Result X;
    X.Read();
    X.GetMarks();
    X.Process();
    X.Display();
    X.PutMarks();
    X.PrintResult();
}

//multiple inheritance
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int rl;
    char nm[20];
    public:
        void Read();
        void Display();
};
class Marks 
{
    protected:
        int s1;
        int s2;
        int s3;
    public:
        void GetMarks();
        void PutMarks();
};
class Result : public Marks,public Student
{
        int t;
        float p;
        char div[10];
    public:
        void Process();
        void PrintResult();
};
void Student::Read()
{
    cout<<"Roll No:";
    cin>>rl;
    cout<<"Enter name:";
    cin>>nm;
}
void Student::Display()
{
    cout<<"\n Roll No:"<<rl<<endl;
    cout<<"Nmae :"<<nm<<endl;
    cout<<"\n";
}
void Marks::GetMarks()
{
    cout<<"enter marks for 3 subjects:"<<endl;
    cin>>s1>>s2>>s3;
}
void Marks::PutMarks()
{
    cout<<"Subject 1 :"<<s1<<endl;
    cout<<"Subject 2 :"<<s2<<endl;
    cout<<"Subject 3 :"<<s3<<endl;
}
void Result::Process()
{
    t=s1+s2+s3;
    p=t/3.0;
    p>=60?strcpy(div,"first"):p>=50?strcpy(div,"second"):strcpy(div,"third");
}
void Result::PrintResult()
{
    cout<<"Total="<<t<<endl;
    cout<<"\n";
    cout<<"Percentage="<<p<<endl;
    cout<<"Division="<<div<<endl;
}
int main()
{
    Result X;
    X.Read();
    X.GetMarks();
    X.Process();
    X.Display();
    X.PutMarks();
    X.PrintResult();
}
#include<iostream>
#include<string.h>
using namespace std;
class bank
{
    int p1;
    int account_balance;
    string nme;
    public:
        void process();
        void printbalance();
};
class Account:public bank
{
    public:
        void current_account();
        void saving_account();
};
void bank::process()
{
    cout<<"p1"<<p1;
    cout<<"enter name of account holder :-";
    cin>>nme;
}
void bank::printbalance()
{
    cout<<"\n name of the account holder :-"<<nme;
}*/
#include<iostream>
using namespace std;
//Bank Management System using Class & inheritance in C++
/*
    1.Saving Account
    2.current Account
 
    Account Creation
    Deposit
    Withdraw
    Balance
 
*/
class account
{
private:
    string name;
    int accno;
    string atype;
public:
    void  getAccountDetails()
    {
        cout<<"\nEnter Customer Name : ";
        cin>>name;
        cout<<"Enter Account Number  : ";
        cin>>accno;
        cout<<"Enter Account Type    : ";
        cin>>atype;
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype;
    }
};
class current_account : public account
{
private:
    float balance;
public:
    void c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to be withdraw :";
        cin>>withdraw;
        if(balance > 1000)
        {
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
 
    }
 
 
};
 
class saving_account : public account
{
private:
    float sav_balance;
public:
    void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
    void s_deposit()
    {
        float deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance :- "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance > 500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
};
int main()
{
    current_account c1;
    saving_account s1;
    char type;
    cout<<"\nEnter S for saving customer and C for current a/c customer : ";
    cin>>type;
    int choice;
    if(type=='s' || type=='S')
    {
        s1.getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s1.s_deposit();
                break;
            case 2 :
                s1.s_withdraw();
                break;
            case 3 :
                s1.s_display();
                break;
            case 4 :
                s1.displayDetails();
                s1.s_display();
                break;
            case 5 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else if(type=='c' || type=='C')
    {
        c1.getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                c1.c_deposit();
                break;
            case 2 :
                c1.c_withdraw();
                break;
            case 3 :
                c1.c_display();
                break;
            case 4 :
                c1.displayDetails();
                c1.c_display();
                break;
            case 5 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else
    {
        cout<<"\nInvalid Account Selection";
    }
end:
    cout<<"\nThank You for Banking with us..";
    return 0;
}
