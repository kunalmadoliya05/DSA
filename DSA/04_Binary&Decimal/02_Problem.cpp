#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int answer = 0;

    if (n < 0) {
        n = -n;
        int inverted = ~n;
        n = inverted + 1;
    }

    for (int i = 0; i < 8; i++) {
        int bits = n & 1;
        answer = (bits * powf(10, i)) + answer;
        n = n >> 1;
    }

    cout << "Binary representation: " << answer << endl;

    return 0;
}
