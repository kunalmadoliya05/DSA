#include <iostream>
using namespace std;

int main()
{
    int n1;
    cout << "Enter first number :";
    cin >> n1;

    int n2;
    cout << "Enter second number :";
    cin >> n2;

    char ch;
    cout << " Enter operator :";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;
    
    case '*':
        cout << n1 * n2;
        break;
    
    case '/' :
    cout << n1/n2;
    break;
    }
}
