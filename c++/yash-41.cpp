#include <iostream>
using namespace std;
int main()
{
    char i = 64;
    int j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << "\t " << i;
            i++;
        }
        cout << "\n";
    }
}
