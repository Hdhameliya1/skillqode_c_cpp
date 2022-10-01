/*#include <iostream>
using namespace std;
class arith
{
    int a, b;

public:
    void setval(int x, int y)
    {
        a = x;
        b = y;
    }
    void getval()
    {
        cout << "\n a:" << a << "\tb:" << b;
    }
    void dosum()
    {
        cout << "\n a+b:" << a + b;
        cout << "\n a-b:" << a - b;
        cout << "\n a*b:" << a * b;
        cout << "\n a/b:" << a / b;
    }
};
int main()
{
    arith obj1;
    obj1.setval(20, 10);
    obj1.getval();
    obj1.dosum();
}
#include <iostream>
using namespace std;
class arith
{
    int a, b;

public:
    void setval()
    {
        cout << "\n enter a: ";
        cin >> a;
        cout << "\n enter b: ";
        cin >> b;
    }
    void getval()
    {
        cout << "\n a:" << a << "\tb:" << b;
    }
    void dosum()
    {
        cout << "\n a+b:" << a + b;
        cout << "\n a-b:" << a - b;
        cout << "\n a*b:" << a * b;
        cout << "\n a/b:" << a / b;
    }
};
int main()
{
    arith obj1;
    obj1.setval();
    obj1.getval();
    obj1.dosum();
}
#include <iostream>
using namespace std;
class student
{

private:
    char name[30];
    int rollNo,english,gujarati,maths;
    int total;
    float perc;

public:
    void getdata()
    {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter english: ";
            cin >> english;
            cout << "Enter gujarati: ";
            cin >> gujarati;
            cout << "Enter maths: ";
            cin >>maths;
           cout<<"\nrollnumber\tenglish\tgujarati\ttotal\t"
    }
    void calculate()
    {
            total=english+gujarati+maths;
            perc = (float)total / 700 * 100;
    }

    void putdata()
    {
            cout << "Student details:";
            cout << endl;
            cout << "Name of student :" << name;
            cout << endl;
            cout << "Roll Number of student :" << rollNo;
            cout << endl;
            cout << "Total marks of student :" << total;
            cout << endl;
            cout << "Percentage of student :" << perc;
        }
    }
};
int main()
{
    // object declaration of class student
    student obj;
    obj.getdata();
    obj.putdata();
    return 0;
}
#include <iostream>
using namespace std;
class student
{

private:
    char name[30], grade;
    int rollNo, english, hindi, maths;
    int total;
    float perc;

public:
    void getdata()
    {
        cout << "enter name:";
        cin >> name;
        // printf("enter name :");
        // scanf("%s",a);
        cout << "enter english :";
        cin >> english;
        cout << "enter hindi :";
        cin >> hindi;
        cout << "enter maths :";
        cin >> maths;
    }
    void calculate()
    {

        total = english + hindi + maths;
        // printf("\ntotal=%d",total);
        perc = (float)total / 300 * 100;
        // printf("\npercent =%d",pr);
    }
    void putdata()
    {
        cout << "\n total :" << total;
        cout << "\n perc:" << perc;
        cout << "\n grade :" << grade;
        if (perc > 80)
        {
            cout << "A";
        }
        else if (perc > 60)
        {
            cout << " B";
        }
        else if (perc > 40)
        {
            cout << "C";
        }
        else
        {
            cout << "fail";
        }
        cout << "\n______________________________________________________";
    }
};
int main()
{
    student obj1;
    obj1.getdata();
    obj1.calculate();
    obj1.putdata();
}*/
#include <iostream>
using namespace std;

class ItemDetails
{
public:
    int item_no;
    char item_name[50];
    float item_price;
};
class DiscountedItem : public ItemDetails
{
public:
    int discount_percent;
    int discounted_price;
    void accept_details()
    {
        cout << "\n Enter Item Name : ";
        cin >> item_name;
        cout << "\n Enter Item Price : ";
        cin >> item_price;
        cout << "\n Enter Discount Percent : ";
        cin >> discount_percent;
        cout << "\n ----------------------\n";
        discounted_price = item_price - item_price * discount_percent / 100;
    }
    void display_details()
    {
        cout << "\n Item Name : " << item_name;
        cout << "\n Item No. : " << item_no;
        cout << "\n Item Price : " << item_price;
        cout << "\n Discount Percent : " << discount_percent;
        cout << "\n Discounted Price : " << discounted_price;
        cout << "\n ----------------------";
    }
};
int main()
{
    int i, cnt, discount = 0, price = 0;
    DiscountedItem dt[100];

    for (i = 1; i <= cnt; i++)
    {
        dt[i].accept_details();
    }
    for (i = 1; i <= cnt; i++)
    {
        dt[i].display_details();
    }
    for (i = 1; i <= cnt; i++)
    {
        price = price + dt[i].item_price;
    }
    for (i = 1; i <= cnt; i++)
    {
        discount = discount + dt[i].item_price - dt[i].discounted_price;
    }
    cout << "\n Total Price : " << price;
    cout << "\n Total Discount : " << discount;
    return 0;
}
