#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

bool isPrime(long x) {
    if (x<= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0)
        return false;
    for (long i = 5; i * i <= x; i = i + 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long n;
        cin >> n;
        long a = 2, b = n - 2;
        while (a <= b) {
            if (isPrime(a) && isPrime(b)) {
                cout << a << " " << b << endl;
                break;
            }
            a++;
            b--;
            if (a > b) cout << -1 << endl;
        }
    }
}