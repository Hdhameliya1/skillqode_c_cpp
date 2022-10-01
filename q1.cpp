/*#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "\n enter value n ";
    cin >> n;

    for (i = 1; i <= 5; i++)
    {
        // i2 = i * i;
        cout << "\n " << i * i;
    }
}*/
#include <iostream>
using namespace std;
int main()
{
    int i, i2 = 2, n;
    cout << "\n enter value n ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << "\n " << i << i2 * 2;
    }
}
