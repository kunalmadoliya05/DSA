#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an amount: ";
    cin >> n;

    int hundred = 0, fifty = 0, ten = 0, one = 0;

    switch (n >= 100 ? 1 : (n >= 50 ? 2 : (n >= 10 ? 3 : 4)))
    {
    case 1:
        hundred = n / 100;
        n = n % 100;
        cout << " you need  hundred =" << hundred << "\n";

    case 2:
        fifty = n / 50;
        n = n % 50;
        cout << "You need fifty =" << fifty << "\n";

    case 3:
        ten = n / 10;
        n = n % 10;
        cout << " you need ten =" << ten << "\n";

    case 4:
        one = n / 1;
        n = n % 1;
        cout << " you need one = " << one << "\n";
        break;
    }

    return 0;
}
