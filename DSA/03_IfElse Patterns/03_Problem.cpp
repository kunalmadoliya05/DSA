#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            cout << "Not a Prime Number ";
            break;
        }
        else
        {
            cout << " It is a PRIME number";
        }
    }

    return 0;
}
