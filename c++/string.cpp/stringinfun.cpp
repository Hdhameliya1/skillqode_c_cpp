/*#include <iostream>
#include <string>
using namespace std;
void mystring(string newstr)
{
    cout << "hello," << newstr << " \twelcome to skill qode!\n";
}
int main()
{
    string str;
    cout << "please enter your name: \n";
    // cin>>str;
    // cout<<\n str :"<<str;
    getline(cin, str);
    mystring(str);
    return 0;
}
// easy way to find in string length
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int str;
    cout << "please enter your name: \n";
    cin >> str;
    int strlen(str);
    cout << "\n len :" << str;
    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, k, j = 0, length;
    char str1[50], str2[50];
    cout << "\n enter string : ";
    cin >> str1;
    for (i = 0; str1[i] != '\0'; i++)
        ;
    cout << "\n str length :" << i;

    k = i - 1;
    for (j = 0; j <= i; j++)
    {
        str2[j] = str1[k];
        k--;
    }
    cout << "\n reverse string " << str2;
    length = i;
    for (i = 0; i <= length / 2; i++)
    {
        if (str1[i - 1] || str1[length - i])
        {
            j++;
        }
    }
}