#include <iostream>
using namespace std;

int main()
{
    int n;
  cout << "Enter a Number :";
    cin >> n;

    int rows = 1;
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {
            cout << rows;
            column++;
        }
        cout << "\n";
        rows++;
    }
    return 0;
}
