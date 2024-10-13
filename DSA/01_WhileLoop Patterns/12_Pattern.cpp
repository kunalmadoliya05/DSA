#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int rows = 1;
    int count = 1;
    while (rows <= n)
    {

        int column = 1;
        while (column <= n)
        {
            char ch = 'A' + count - 1;
            count++;
            cout << ch;
            column++;
        }
        cout << "\n";
        rows++;
    }
    return 0;
}
