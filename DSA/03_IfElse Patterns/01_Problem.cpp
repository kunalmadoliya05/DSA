#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number";
    cin >> n;

    int sum = 0;

    for (int i = 0 ; i <= n; i++)
    {

        sum += i ;
    }
        cout << sum << '\n';
   
    return 0;
}
