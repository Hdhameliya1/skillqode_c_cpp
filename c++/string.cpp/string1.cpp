/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter string: \n ";
    getline(cin, str);

    cout << "hello," << str << "welcome to skill qode!\n";
}*/

// wrnp

#include <iostream>
#include <math.h>
using namespace std;
float CmInt()
{
    float principle, rate, time, CI;
    cout << "\n enter principle (amount) :";
    cin >> principle;
    cout << "\n enter rate  :";
    cin >> rate;
    cout << "\n enter time :";
    cin >> time;

    CI = principle * (pow((1 + rate / 100), time));
    return (CI);
}
int main()
{
    float CI;
    CI = CmInt();
    cout << "\n CI :" << CI;
}

#include <iostream>
#include <string>
using namespace std;
float cmint(float principle, float rate, float time)
{
    float CI, i;
    CI = principle * (pow((1 + rate / 100), time));
    cout << "\n cmint :";
    cin >> CI;
    return (CI);
}
int main()
{
    float principle, rate, time, CI;
    cout << "\n enter principle (amount) :";
    cin >> principle;
    cout << "\n enter rate  :";
    cin >> rate;
    cout << "\n enter time :";
    cin >> time;
    class, object, function, proparties, example
}
