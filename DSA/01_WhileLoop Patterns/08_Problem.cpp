#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int rows = 1;
    while (rows <= n) {
        int count = rows;
        int column = 1;
        while (column <= rows) {
            cout << count;
            count++;
            column++;
        }
        cout << "\n";
        rows++;
    }
    return 0;
}
