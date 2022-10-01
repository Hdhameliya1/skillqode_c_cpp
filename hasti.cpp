// two value find smallest
/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two integers to find smallest...\n";
    cout << "Enter a: \n";
    cin >> a;
    cout << "Enter b : \n";
    cin >> b;

    cout << "You entered : " << a << " and " << b << endl;
    if (a < b)
    {
        cout << a << " is smaller than " << b;
    }
    else if (a > b)
    {
        cout << b << " is smaller than " << a;
    }
    else
    {
        cout << "both are equal";
    }
}
#include <iostream>
using namespace std;
int main()
{
    int a, n;

    cout << "\n enter a = ";
    cin >> a;

    if (a >= 0)
    {
        cout << "\n a is positive ";
    }
    else
    {
        cout << "\n a is nagetive ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "\nEnter any Number to Check it is Divisible by 5 and 3 =  ";
    cin >> number;

    if ((number % 5 == 0) && (number % 3 == 0))
    {
        cout << "\nGiven number " << number << " is Divisible by 5 and 3";
    }
    else
    {
        cout << "\nGiven number " << number << " is Not Divisible by 5 and 3";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "\nEnter any Number to Check it is Divisible by 5  =  ";
    cin >> number;

    if (number % 5 == 0)
    {
        cout << "\nGiven number " << number << " is Divisible by 5: ";
    }
    else
    {
        cout << "\nGiven number " << number << " is Not Divisible by 5 :";
    }

    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "\nEnter a =  ";
    cin >> a;
    cout << "\nEnter b =  ";
    cin >> b;
    c = a * b;
    if ((c % 3 == 0) && (c % 7 == 0))
    {
        cout << "\nGiven number " << c << " is Divisible by 3 and 7";
    }
    else
    {
        cout << "\nGiven number " << c << " is Not Divisible by 3 and 7";
    }
    return 0;
}
