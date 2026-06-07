#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for (int n = start; n <= end; n++) {
        int temp = n;
        int sum = 0, r;

        while (temp != 0) {
            r = temp % 10;
            sum = sum + (r * r * r);   // For 3-digit Armstrong numbers
            temp = temp / 10;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}