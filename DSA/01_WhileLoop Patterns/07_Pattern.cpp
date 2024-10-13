#include <iostream>
using namespace std;

int main()
{
    int n;
  cout << "Enter a Number :";
    cin >> n;

    int count = 0;

    int rows = 1;
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {
            count++;
            cout << count;
            column++;
        }
        cout << "\n";

        rows++;
    }
    return 0;
}
