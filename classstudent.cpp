//que1
/*#include<iostream>
using namespace std;
class Student
{
    int Admno;
    string sname;
    float eng,maths,science,total,per;
    public:
    int takedata()
    {
        cout<<"enter AdmNo:";
        cin>>Admno;
        cout<<"enter name:";
        cin>>sname;
        cout<<"enter eng:";
        cin>>eng;
        cout<<"enter maths:";
        cin>>maths;
        cout<<"enter science:";
        cin>>science;                   
   }
   float ctotal()
   {
        total=eng+maths+science;
        cout<<"total is:"<<total;
   }
   float showdata()
   {
     per=total/3;
     cout<<"\n per is:"<<per;
   }
};
int main()
{
    Student stud;
    stud.takedata();
    stud.ctotal();
    stud.showdata();
}
//2
#include<iostream>
using namespace std;
class batsman
{
    int bcode;
    string bname;
    int innings,notout,runs;
    float batavg;
    public:
    void readdata();
    void calcavg();
    void displaydata();
};
    void batsman::readdata()
    {
        cout<<"\n enter bcode :-";
        cin>>bcode;
        cout<<"\n name of batsman :-";
        cin>>bname;
        cout<<"\n number of innings :-";
        cin>>innings;
        cout<<"\n batsman remain :- ";
        cin>>notout;
        cout<<"\n runs :- "; 
        cin>>runs; 
    }
   void batsman::calcavg()
    {
        batavg=runs/(innings-notout);
    }
    void batsman::displaydata()
    {
        cout<<"\n bcode :-"<<bcode;
        cout<<"\n name of batsman :-"<<bname;
        cout<<"\n number of innings :-"<<innings;
        cout<<"\n batsman remain :- "<<notout;
        cout<<"\n runs :- "<<runs;
        cout<<"\n batavg :-"<<batavg;
    }
int main()
{
    batsman bman;
    bman.readdata();
    bman.calcavg();
    bman.displaydata();
}
//3
#include<iostream>
using namespace std;
class test
{
    int testcode;
    string description;
    int nocandidate,centerread;
    public:
    void schedule();
    void calcntr();
    void disptest();
};
    void test::schedule()
    {
        cout<<"\n enter testcode:-";
        cin>>testcode;
        cout<<"\n description :-";
        cin>>description;
        cout<<"\n number of candidate :-";
        cin>>nocandidate;
        calcntr();
    }
   void test::calcntr()
    {
       centerread = nocandidate/100+1;
    }
    void test::disptest()
    {
        cout<<"\n testcode :-"<<testcode;
        cout<<"\n description :-"<<description;
        cout<<"\n number of candidate  :-"<<nocandidate;
        cout<<"\n number of center : "<<centerread;
    }
int main()
{
    test foruserview;
    foruserview.schedule();
    foruserview.disptest();
}
//4
#include<iostream>
using namespace std;
class flightmembers
{
    int flightnum;
    string destination;
    float distance,fuel;
    public:
    void calfuel();
    void feedinfo();
    void showinfo();
};
    void flightmembers::feedinfo()
    {
        cout<<"\n enter flight number of pessanger :- ";
        cin>>flightnum;
        cout<<"\n enter member destination:- ";
        cin>>destination;
        cout<<"\n enter member distance :- ";
        cin>>distance;
        calfuel();
    }
    void flightmembers::calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance>=1000 && distance<=2000)
        {
            fuel=1100;
        }
        else if(distance>=2000)
        {
            fuel=2200;
        } 
    }
    void flightmembers::showinfo()
    {
        cout<<"\n  flight number of pessanger :- "<<flightnum;
        cout<<"\n  member destination :- "<<destination;
        cout<<"\n enter member distance :- "<<distance;
        cout<<"\n  member fuel :- "<<fuel;
    }
int main()
{
    flightmembers pessanger;
    pessanger.feedinfo();
    pessanger.showinfo();
}
//5 
#include<iostream>
using namespace std;
class book
{
    int book_no;
    string book_title;
    float price;
    float totalcost;
    public:
    void total_cost();
    void input();
    void purchase();
};
    void book::input()
    {
        cout<<"\n enter book_no :- ";
        cin>>book_no;
        cout<<"\n enter book_title :- ";
        cin>>book_title;
        cout<<"\n enter price :- ";
        cin>>price;
        total_cost();
    }
    void book::total_cost()
    {
        totalcost = book_no*price;
    }
    void book::purchase()
    {
        cout<<"\n book_no :- "<<book_no;
        cout<<"\n book_title :- "<<book_title;
        cout<<"\n price :- "<<price;
        cout<<"\n total_cost :- "<<totalcost;
    }
int main()
{
    book copies;
    copies.input();
    copies.purchase();
}*/
//6
#include<iostream>
using namespace std;
class report
{
    int addno,marks1,marks2,marks3,marks4,marks5;
    string name;
    float marks;
    float average;
    void getavg();
    public:
    void readinfo();
    void displayinfo();
};
    void report::readinfo()
    {
        cout<<"\n enter addmission number :- ";
        cin>>addno;
        cout<<"\n enter student name :-";
        cin>>name;
        cout<<"\n enter marks1 :-";
        cin>>marks1;
        cout<<"\n enter marks2 :-";
        cin>>marks2;
        cout<<"\n enter marks3 :-";
        cin>>marks3;
        cout<<"\n enter marks4 :-";
        cin>>marks4;
        cout<<"\n enter marks5 :-";
        cin>>marks5;
        getavg();
    }
    void  report::getavg()
    {
        marks=marks1+marks2+marks3+marks4+marks5;   
        average = marks/5;
    }
    void report::displayinfo()
    {
        cout<<"\n  addmission number :- "<<addno;
        cout<<"\n  student name :-"<<name;
        cout<<"\n  marks :-"<<marks;
        cout<<"\n average of marks :- "<<average;
    }
int main()
{
    report marks;
    marks.readinfo();
    marks.displayinfo();
}
