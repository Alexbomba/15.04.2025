#include <iostream>
using namespace std;

void printFrom1ToN(int n) {
    if (n == 0) return;
    printFrom1ToN(n - 1);
    cout << n << " ";
}

void printFromAtoB(int a, int b) {
    cout << a << " ";
    if (a == b) return;
    if (a < b) printFromAtoB(a + 1, b);
    else printFromAtoB(a - 1, b);
}

bool isPowerOfTwo(int n) {
    if (n == 1) return true;
    if (n == 0 || n % 2 != 0) return false;
    return isPowerOfTwo(n / 2);
}

int sumDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}

void printDigitsReverse(int n) {
    if (n == 0) return;
    cout << n % 10 << " ";
    printDigitsReverse(n / 10);
}

void printDigitsForward(int n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    printDigitsForward(n / 10);
    cout << n % 10 << " ";
}

int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n, a, b;
    cin >> n;
    printFrom1ToN(n);
    cout << "\n";

    cin >> a >> b;
    printFromAtoB(a, b);
    cout << "\n";

    cin >> a >> b;
    cout << (isPowerOfTwo(a) ? "YES" : "NO") << " ";
    cout << (isPowerOfTwo(b) ? "YES" : "NO") << "\n";

    cin >> n;
    cout << sumDigits(n) << "\n";

    cin >> n;
    printDigitsReverse(n);
    cout << "\n";

    cin >> n;
    printDigitsForward(n);
    cout << "\n";

    cin >> n;
    cout << reverseNumber(n) << "\n";
}
