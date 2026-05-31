#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // handle negative numbers
    if (n < 0) n = -n;

    // special case: 0 has 1 digit
    if (n == 0) {
        cout << "Number of digits: 1" << endl;
        return 0;
    }

    int count = 0;

    for (; n > 0; n = n / 10) {
        count++;
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}